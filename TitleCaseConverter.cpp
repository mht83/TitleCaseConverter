//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <string>

void capitalizeText(std::string& text) {
    bool capitalizeNext = true; 
    for (char& ch : text) {
        if (capitalizeNext && std::isalpha(ch)) {
            ch = std::toupper(ch); 
            capitalizeNext = false; 
        }
        else if (ch == ' ') {
            capitalizeNext = true; 
        }
    }
}

int main() {
    std::string text;
    std::cout << "Enter the text to be capitalized: ";
    std::getline(std::cin, text); 
    capitalizeText(text); 

    std::cout << "Capitalized Text: " << text << std::endl; 

    return 0;
}
