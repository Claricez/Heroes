#include <iostream>

#include "Battle.h"


/
Battle::Battle()
{
    this->poder = 10;
    this->defesa = 10;
    this->escudoAtivado = true;
}


Battle::Battle(int poder, int defesa, bool escudoAtivado, TIME time01, string capitao):Time(time01, capitao)
{
    setPoder(poder);
    this->defesa = defesa;
    this-> escudoAtivado = escudoAtivado;
    
}


ostream &operator<<(ostream &out, const Battle &b)
{
    //out << static_cast< Time > ;
    out << "Poder: " << b.poder<< "\n";
    out << "Defesa: " << b.defesa << "\n";
    
    
    return out;
}

void Battle::operator=(Battle &other)
{
    if(this != &other){
        this->poder = other.poder;
        this->qtdPersonagens = other.qtdPersonagens;
        this->defesa = other.defesa;
        this->escudoAtivado = other.escudoAtivado;
    }
}

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


void Battle::setPoder( int poder)
{
    if(poder >= 0 ){
    return;
    }
}
