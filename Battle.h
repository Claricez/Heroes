#ifndef BATTLE_H
#define BATTLE_H
#include <string>
#include <iostream>
using std::string;
using std::ostream;

class Battle
{
    public:
    //Sobrecarga de operadores
    //Operador <<
    friend ostream &operator<<(ostream &, const Battle &);

    //Operador =
    const Battle &operator=( const Battle &);
  
   bool operator==(const Battle &) const;
    //Construtores
        Battle(string &, int, int, int, int, bool, int, int = 10);
        Battle(int = 10);
        Battle(const Battle &);
        ~Battle();

    //Métodos
   
    void poderSuper();
    void danoBaixo();

    //Get
    int getQtd() const;

    int &operator[] (int);
    int operator[] (int) const;

    private:
        string name;
        int poder;
        int defesa;
        int vida;
        int escudo;
        bool escudoAtivado;
        int qtdPersonagens;
        int *ptr;


};

#endif // VILLAINS_H