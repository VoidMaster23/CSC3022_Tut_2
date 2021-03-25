#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "functions"
#define strVector std::vector<std::string>
#define str std::string


int main(int argc, char* argv[]) {
   strVector menu_items;
   str fileName;

   if(argc == 1)
    fileName = "menu_1.txt";
   else
    fileName = argv[1];

   std::ifstream in(fileName);

   if (!in) {
       std::cout << "Couldn't open file " << fileName << std::endl;
       return 1;
   }

   str line;
   while (std::getline(in, line)) {
       menu_items.push_back(line);
       SHVNKA005::parseItem(line);
   }

   in.close();

   std::cout << menu_items.size() << " Items on the menu" << std::endl;
}


