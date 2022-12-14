#include "missoes.h"
#include <iostream>
using std::cout;

#include <string>
using std::string;


Missoes::Missoes(bool escudoAtivo, string name, string type, int pontoTime1, int pontoTime2):
escudoAtivo(escudoAtivo), name(name), type(type)
{

};

Missoes::Missoes(bool escudoAtivo, string name, string type):
escudoAtivo(escudoAtivo), name(name), type(type)
{

};

Missoes::Missoes( int pontoTime1, int pontoTime2):Battle(pontoTime1, pontoTime2)
{
    
};

Missoes::Missoes(const Missoes &other):Battle(static_cast< Battle >(other))
{
    this->name = other.name;
    this->type = other.type;
}

Missoes::~Missoes()
{

}

void Missoes::printInformations()
{
    cout << "Nome da Missão: " << this->name << "\n";
    cout << "Tipo de missão: " << this->type << "\n";
}