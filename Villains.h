#ifndef VILLAINS_H
#define VILLAINS_H
#include <string>
#include "heroes.h"
#include <iostream>

using std::string;
using std::ostream;
 
class Villains: public Heroes
{
    public:

    friend ostream &operator<<(ostream &, const Villains &);
   
    //Construtores
        Villains();
        Villains(string, int, int, int);
        Villains(const Villains &);
        ~Villains();

    //Métodos
    void print() const;
    void poderSuper( int );
    void danoBaixo( int );
    void vidaReduzida(int);

    //Set
    void setPoder(int);
    void setDefesa(int);
    void setName(string);
    void setEscudo(int);

    private:
       
        string name;
        int poder;
        int defesa;
        int vida;
        int escudo;
        bool shieldActive;
        int tam;
        int *ptr;

};

#endif // VILLAINS_H