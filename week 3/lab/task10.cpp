#include <iostream>
using namespace std;

main()
{
  
   int ageYears;

   cout<< "Enter your age in years: ";
   cin>> ageYears;

   int ageDays = ageYears * 365;

   cout<< "Your age in days is approximately" << ageDays << " days" << endl;
}