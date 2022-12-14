#include "combate.h"

#include <iostream>
using std::cout;

#include <string>
using std::string;

Combate::Combate()
{

}

Combate::Combate(const Combate&other)
{

}

Combate::~Combate()
{
    
}

int Combate::setAtaqueTime1( int ataqueTime1)
{
    this->ataqueTime1 = ataqueTime1;
    return ataqueTime1;
}

int Combate::setAtaqueTime2( int ataqueTime2)
{
    this->ataqueTime2 = ataqueTime2;
    return ataqueTime2;
}




void Combate::setResultado(){

    this->resultado=resultado;
    return;
}

void Combate::printInformations()
{
    cout << "Ataque Heróis: " << this->ataqueTime1 << "\n";
    cout << "Ataque Vilões: " << this->ataqueTime2 << "\n";
}
