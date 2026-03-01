#include <iostream>
using namespace std;

main()
{
   
   int vegKg, fruitKg;
   double vegPrice, fruitPrice, totalCoins, totalRupees;

   cout<< "Enter vegetable price per Kg (in coins) :";
   cin>> vegPrice;

   cout<< "Enter fruit price per Kg (in coins) :";
   cin>> fruitPrice;

   cout<< "Enter total kilograms of vegetables :";
   cin>> vegKg;

   cout<< "Enter total kilograms of fruits :";
   cin>> fruitKg;

   totalCoins = (vegPrice * vegKg) + (fruitPrice * fruitKg);

   totalRupees = totalCoins / 1.94;

   cout<< "Total earnings in Rupees (Rps) :" << totalRupees << endl;
}