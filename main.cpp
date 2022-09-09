#include <iostream>
#include <string.h>
using namespace std;
using std::cout;

#include "heroes.h"
#include "heroes.cpp"

int main( )
{
    cout << "Usando Heróis no main\n";
    
    Heroes WonderWoman;
    strcpy(WonderWoman.name, "Wonder Woman");
    strcpy(WonderWoman.type, "Battle");
    WonderWoman.setStrength(80);
    WonderWoman.setShield(50);
    WonderWoman.setLife(50);
    WonderWoman.print();
    WonderWoman.especialPower( );
    WonderWoman.power();
    WonderWoman.print();

    Heroes BlackWidow; 
    strcpy(BlackWidow.name, "Black Widow" );
    strcpy(BlackWidow.type, "Battle");
    BlackWidow.setStrength(20);
    BlackWidow.setShield(20);
    BlackWidow.setLife(15); 
    BlackWidow.print();
    BlackWidow.especialPower( );
    BlackWidow.power();
    BlackWidow.print();
    return 0;

}