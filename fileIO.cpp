#include <fstream>
#include <iostream>
#include <sstream>

int main(){
    std::ifstream inFile;
    std::string currentLine;
    std::stringstream converter;
    std::stringstream ss;
    std::string sOne;
    std::string sTwo;
    int numOne;
    int numTwo;
    int sum;
    std::string text;

    inFile.open("data.csv");

    while(getline(inFile, currentLine)){  
        ss.clear();
        ss.str("");
        converter.clear();
        converter.str("");

        ss.str(currentLine);

        getline(ss, sOne, ',');
        getline(ss, sTwo, ',');
        getline(ss, text);

        converter << sOne;
        converter >> numOne;
        converter.clear();
        converter.str("");
        converter << sTwo;
        converter >> numTwo;
        
        sum = (numOne + numTwo);

        for (int i = 0; i < sum; i++){
            std::cout << text << " ";
        }
        std::cout << std::endl;

    }
    inFile.close();
    
}
        
    
