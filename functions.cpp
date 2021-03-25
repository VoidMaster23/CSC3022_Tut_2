#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#define stream std::istringstream


namespace SHVNKA005 {

    void parseItem(std::string line) {
        
        int lineLength = line.size();
        int lastSpaceInd = line.find_last_of(' ');
        int rIndex = line.find_last_of('R');

        std::string calories = line.substr(lastSpaceInd+1);
        std::string itemName = line.substr(0, rIndex);
        std::string price = line.substr(rIndex, lastSpaceInd - rIndex +1);


        std::cout << itemName << std::endl;
        std::cout << "\t- "<< price << std::endl;
        std::cout << "\t- "<< calories << " calories"<< std::endl;
    }
 
}