//Fonctions réalisées par l'étudiant 1 :
#include <cmath>
#include <iostream>
using namespace std;

bool estMajeur(int age) {
  if (age >= 18) {
    return true;
  } else {
    return false;
  }
}

int exposant(nombre, exposant) {
  return pow(nombre, exposant);
}

float TVA(prix) {
  tauxTVA = 0.196; // taux de TVA à 19,6%
  return prix * (1 + tauxTVA);
}

int plusGrand(a, b, c) {
  max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  return max;
}


//Fonctions réalisées par l'étudiant 2 :
#include <cmath>
#include <iostream>
using namespace std;
bool estPair(int nombre) 
{
    if(nombre % 2 == 0) 
	{
        return true;
   } else 
   {
      return false;
   }
}
}
int sommeNombre(int nombre) 
{
    int somme = 0;
    for(int i = 1; i <= nombre; i++) 
	{
        somme += i;
    }
    return somme;
}
#include <iostream>


using namespace std;

        
		
		double salaireNet(double salaireBrut) 
		{
           double chargeSalariale = 0.23 * salaireBrut;
           double salaireNet = salaireBrut - chargeSalariale;
        return salaireNet;
}
#include <iostream>

using namespace std;

int plusPetit(int a, int b, int c) 
{
  int minimum = a;
  if (b < minimum) 
  {
    minimum = b;
  }
  if (c < minimum) 
  {
    minimum = c;
  }
  return minimum;
}








//Fonctions réalisées par l'étudiant 3 :
