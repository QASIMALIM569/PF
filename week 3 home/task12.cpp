#include <iostream>
using namespace std;

main()
{

   int number, width, height, wallArea, totalWalls;

   cout<< "Number of square meters you can paint :";
   cin>> number;

   cout<< "width of the single wall (in meters) :";
   cin>> width;

   cout<< "Height of the single wall (in meters) :";
   cin>> height;

   wallArea = width * height;
   totalWalls =  number / wallArea;

   cout<< "Number of walls you can paint :" << totalWalls;
}