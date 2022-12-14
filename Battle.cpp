#include <iostream>
#include "Battle.h"

#include <string>
using std::string;
using std::cout;

Battle::Battle()
{

}

Battle::Battle( Battle const &other):Partida(static_cast<Partida> (other))
{
    this->pontoTime1 = other.pontoTime1;
    this->pontoTime2 = other.pontoTime2;
    
}

Battle::Battle(int pontoTime1, int pontoTime2, TIME time1, TIME time2, int numPartida):Partida(time1, time2, numPartida)
{
    setPontoTime1(pontoTime1);
    setPontoTime2(pontoTime2);
}

Battle::Battle(int pontoTime1, int pontoTime2){
    setPontoTime1(pontoTime1);
    setPontoTime2(pontoTime2);

}

ostream &operator<<(ostream &out, const Battle &b)
{
    out << static_cast< Partida>(b) << '\n';
    out << "Pontos Heróis: " << b.pontoTime1 << "\n";
    out << "Pontos Vilões: " << b.pontoTime2 << "\n";
  
       
    return out;
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



Battle::~Battle(){
    delete [] ptr;
};

//Gets
int Battle::getQtd ( ) const
{
    return qtdPersonagens;
};

Battle &Battle::operator=(const Battle &right)
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

 
double Battle::setPontoTime1( double pontoTime1)
{
    while(pontoTime1>0)
    {
        return pontoTime1;
    }
    if (pontoTime1 < 1)
    {
        cout << "Heróis derrotados" << "\n";
    }

    return pontoTime1;
};

double Battle::setPontoTime2( double pontoTime2)
{
    while(pontoTime2>0)
    {
        return pontoTime2;
    }
    if (pontoTime2 < 1)
    {
        cout << "Vilões derrotados" << "\n";
    }

    return pontoTime2;
};

void Battle::danoTime1( )
{
    pontoTime1 = pontoTime1 -10;
}


void Battle::printInformations()
{
    cout << "Pontos Heróis: " << this->pontoTime1 << "\n";
    cout << "Pontos Vilões: " << this->pontoTime2 << "\n";
}
