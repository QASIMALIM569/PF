#include <iostream>
using namespace std;

main()
{
   
   int population;
   int n;

   cout<< "Enter the current world population:";
   cin>> population;

   cout<< "Enter the monthly birth rate:";
   cin>> n;

   int months = 30 * 12;

   int future_population = population + (n * months);
    
   cout << "Population in three decades will be:" << future_population << endl;

}