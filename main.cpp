#include <iostream>
#include <string>
#include  <bits/stdc++.h>
using namespace std;
using std::string;
using std::cout;


#include <vector>
#include "heroes.h"
#include "heroes.cpp"

#include "time.h"
#include "time.cpp"
#include "Battle.h"
#include "Battle.cpp"

#include "Villains.h"
#include "Villains.cpp"

   
int main()
{   

   TIME time01;
      time01.atacante = "Wonder Woman";
      time01.defensor = "Rougue";
      time01.pontos = 150;

   Time time02;
      time02.atacante = "Yonas";
      time02.defensor = "Vini";
      time02.pontos = 200;

   
   Heroes jogo1("Mutant", 60, 120, time01, "Black Widow");
   Heroes jogo2("Mutant", 80, 350, time02, "Yonas");
   //Time time1(time01, "Vini");
   //Time time2(time01, "Yonas");

   cout << time1;
   cout << time2;
   cout << jogo1;
   cout << jogo2;

   Villains viloes("Hella", 100, 150, 200);

 

}



