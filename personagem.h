#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include "partida.h"

using std::string;
using std::vector;
using std::ostream;
using std::function;

class Personagem: public Partida
{
    friend ostream & operator<<(ostream &, const Personagem &);
    public:

        //Construtores
        Personagem();
        //Personagem( const Personagem&);
        Personagem(string, string, TIME, TIME);
        Personagem(int, string, string, TIME);
        ~Personagem();

        //Operadores
        Personagem & operator=(const Personagem &);
        bool operator==(const Personagem &) const;
        bool operator!=(const Personagem &) const;
        void operator!();

        //Métodos Sets
        void setNames(string);
        void setDescription( string );

        //Métodos Gets
        string getNames() const;
        string getDescription() const;

        //Métodos
        void printTypes(int);


    private:

        //Atributos
        string description;
        string level;
        //vector <Nomes*> name; 
        string name;

        //Statics
        static const int NUMTYPES = 4;
        static const string Types[ NUMTYPES ];
        
         
    
};

#endif 