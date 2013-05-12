// Opérations.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
 
int main()
{
   cout << "*******************************Nawal Houari ******************************" << endl<< endl;
   string Nom("ADDOU");
   string Prenom("NAJIB");
   cout << " votre Nom est:     " << Nom << endl;
  cout << " votre Prenom est:     " << Prenom << endl << endl;
   double Classe(18);
   Classe += 5;  
   cout << " Votre classe actuelle est:      ";
   cout << Classe << endl<< endl;
   int age(2013);
   age -= 1981;
   cout << " Votre age actuelle est:      ";
   cout << age << endl<< endl;
   int anani(1000000);
   anani *=1000000; 
   cout << " de combien tu es anani:      ";
   cout <<anani << endl<< endl;
   double la39al(1);         
   la39al /= 3;  
   cout << " Ch7al 3andak dyal la39al:      ";
   cout << la39al << endl<< endl;
   double ghadab(9999);         
   ghadab *= 99;
   cout << " Ch7al ghaytla3lik dam w taghdab w t3assab mli tchouf had chi:      ";
   cout << ghadab << endl<< endl;
   string JTM(" je t'aiiiiiimmmeeee bccccccccp 7biba ");
   cout << " Malgre toutttt:       " << JTM << endl;


   return 0;
}


