#include <iostream>
#include <string>
#include "Battle.h"
using std::cout;
using std::string;
using std::ostream;

//Construtores

//Métodos

//Operador <<
//Operador <<
ostream &operator<<(ostream &out, const Battle &b)
{
    out << "Name:";
    out << b.name << '\n';
    out << "Poder";
    out<< b.poder << '\n';
    out<< "Defesa: ";
    out << b.defesa << '\n';
    out<< "Vida" ;
    out << b.vida << '\n';
    out<< "Escudo";
    out << b.escudo << '\n';
    out << "Escudo Ativado"; 
    out << b.escudoAtivado << '\n';
    out << "Quantidade de personagens";
    out << b.qtdPersonagens << '\n';

    
    return out;
};

Battle::Battle (int totalPersonagens)
{
    qtdPersonagens = (totalPersonagens > 0 ? qtdPersonagens: 5);
    ptr = new int [qtdPersonagens];

    for (int i = 0; i < qtdPersonagens; i++)
    {
        ptr[i] = 0;
    }

};

Battle::Battle( const Battle &qtdTotalCopia): qtdPersonagens (qtdTotalCopia.qtdPersonagens)
{
    ptr = new int [qtdPersonagens];

    for ( int i = 0; i<qtdPersonagens; i++)
    {
        ptr[i] = qtdTotalCopia.ptr[i];
    }
};

Battle::~Battle(){
    delete [] ptr;
};

//Gets
int Battle::getQtd ( ) const
{
    return qtdPersonagens;
};

const Battle &Battle::operator=(const Battle &right)
{
    if (&right != this)
    {
        if (qtdPersonagens!=right.qtdPersonagens)
        {
            delete [] ptr;
            qtdPersonagens = right.qtdPersonagens;
            ptr = new int [qtdPersonagens];
        };
    }

        for ( int i = 0; i<qtdPersonagens; i++)
        {
            ptr[i] = right.ptr[i];
        }
        return *this;
};

bool Battle::operator==(const Battle &right) const 
{
        if (qtdPersonagens!=right.qtdPersonagens)
            return true;
        for (int i = 0; i < qtdPersonagens; i++)
        {
            if (ptr[i] != right.ptr[i])
                return true; 
            
            
            
        }
        return false;
    
};