#include <iostream>
#include <string>
using std::string;
using std::cout;

#include "heroes.h"
#include "heroes.cpp"

int main( )
{
    Heroes typeHeroes;
    typeHeroes.printTypes();

    cout << "Usando Heróis no main\n";
    Heroes defaultHeroes;

    Heroes BlackWidow("Black Widow", "Spy", 20, 20, 15);
    BlackWidow.print();
    BlackWidow.reduceDefense();
    BlackWidow.print();
    BlackWidow.getDamageContinuos();


    Heroes WonderWoman("Wonder Woman", "Amazon", 15, 20, 25);
    WonderWoman.print();
    WonderWoman.upLife();
    WonderWoman.print();

    Heroes Wanda( "Scarlet Witch", "Mutant", 10, 20);
    Wanda.reduceLife();
    Wanda.print();
    Wanda.getDamageMax( );
    Wanda.print();

}