#include <iostream>
#include <string>
using std::string;
using std::cout;

#include "heroes.h"
#include "heroes.cpp"

int main( )
{
    cout << "Usando Heróis no main\n";
    Heroes defaultHeroes;

    Heroes BlackWidow("Black Widow", "Spy", 20, 20, 15, 40);
    
    BlackWidow.print();
    BlackWidow.reduceDefense();
    BlackWidow.print();


    Heroes WonderWoman("Wonder Woman", "Amazon", 15, 20, 25);
    WonderWoman.print();
    WonderWoman.upLife();
    WonderWoman.print();

    Heroes Wanda( "Scarlet Witch", "Mutant", 10, 20);
    Wanda.print();
    Wanda.reduceLife();
    Wanda.print();

}