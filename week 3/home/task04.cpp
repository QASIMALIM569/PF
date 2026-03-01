#include <iostream>
using namespace std;

main()
{

   int imposterCount, playerCount;
   double chance;

   cout<< "Enter Imposter Count :";
   cin>> imposterCount;

   cout<< "Enter Player Count :";
   cin>> playerCount;

   chance = 100.0 * imposterCount/playerCount;

   cout<< "Chance of being an imposter :" << chance << "%" << endl;
}