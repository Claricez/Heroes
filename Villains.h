#ifndef VILLAINS_H
#define VILLAINS_H
#include <string>
 
class Villains
{
    public:
    //Operator ==
   
    //Construtores
        Villains();
        Villains(const Villains &);
        ~Villains();

    //Métodos
    void print() const;
    void poderSuper();
    void danoBaixo();

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