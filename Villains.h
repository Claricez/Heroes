#ifndef VILLAINS_H
#define VILLAINS_H
#include <string>
#include "personagem.h"
#include <iostream>

using std::string;
using std::ostream;
 
class Villains: public Personagem
{
    friend ostream &operator<<(ostream &, const Villains &);
    
    public:
    
        void operator=(Villains &other);
        bool operator==(Villains &other) const;
        bool operator!=(Villains &other) const;
        void operator!();
        
        //Construtores
        Villains();
        Villains(int, string, int, int, int, string, string, TIME);
        Villains(const Villains &);
        ~Villains();

        //Métodos
        void print() const;
        void poderSuper( int );
        void danoBaixo( int );
        int vidaReduzida(int);

        //Set
        void setPoder(int);
        void setDefesa(int);
        void setEscudo(int);

        //Gets

    private:
       
        
        int poder;
        int defesa;
        int vida;
        int escudo;
        bool shieldActive;
        string associacao;
};

#endif // VILLAINS_H