#include <fstream>
#include <iostream>
#include <sstream>

int main(){
    std::ifstream inFile;
    std::string currentLine;
    std::stringstream converter;
    int numOne;
    int numTwo;
    int sum;
    std::string text;

    inFile.open("data.csv");

    while(getline(inFile, currentLine)){
        
        std::cout << currentLine << std::endl;

        converter.clear();
        converter.str("");
    }
}
        
    
