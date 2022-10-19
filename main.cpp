#include <iostream>
#include <string>

using std::string;
using std::cout;


#include <vector>
#include "heroes.h"
#include "heroes.cpp"

struct poder{
    string nome;
    int poder;
   }poder1;
   
int main( )
{   

   

   Heroes *heroes01Ptr;
   Heroes *heroes02Ptr;
   vector< string * > heroes;
   heroes01Ptr = new Heroes("Black Widow", "Spy", 40, 80, 25);
   heroes01Ptr->print();
  
   
   heroes.push_back( new string("Wonder Woman"));

   for (int i = 0; i<heroes.size(); i++ )
   {
      heroes02Ptr->heroina( *heroes[i]);
   }

   heroes02Ptr->print();

   

}