#include <iostream>
#include <string>
using std::string;
using std::cout;


#include <vector>
#include "heroes.h"
#include "heroes.cpp"

int main( )
{   

   Heroes level;
   level.printLevel();

   Heroes BlackWidow("Black Widow", "Spy", 40, 80, 25);
   Heroes *blackPtr = &BlackWidow;

   blackPtr->print();
   blackPtr->printTypes(0);

   Heroes WonderWoman("Scarlet Witch", "Witch", 70, 90);
   Heroes *wonderPtr = &WonderWoman;

   wonderPtr->print();
   wonderPtr->printTypes(1);
   
}