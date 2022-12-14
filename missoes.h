#ifndef MISSOES_H
#define MISSOES_H

#include <string>
using std::string;
#include "Battle.h"

class Missoes: public Battle
{
    public:

        Missoes(bool, string, string, int, int);
        Missoes(bool, string, string);
        Missoes(int, int);
        Missoes(const Missoes &);
        virtual ~Missoes();

        virtual void escudoAtivado()=0;
        virtual void escudoDesativado()=0;
        void setEscudoAtivado(bool escudoAtivo = false) {this->escudoAtivo=escudoAtivo;}
        bool isEscudoAtivo(){ return this->escudoAtivo;}

        string getName(){return this->name;}
        string getType() {return this->type;}

        virtual void printInformations( );

    private:
        string name;
        string type;
        bool escudoAtivo;


};

#endif 