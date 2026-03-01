#include <iostream>
using namespace std;

main()
{
   int i, p, chance;

   cout<< "Enter Imposter Count :";
   cin>> i;

   cout<< "Enter Player Count :";
   cin>> p;

   chance = 100 * (i/p);
   cout<< "chance of being an Imposter :" << chance <<endl;
}