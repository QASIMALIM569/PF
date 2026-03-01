#include <iostream>
using namespace std;

main()
{
   
   int initialVelocity, acceleration, time, finalVelocity;
   
   cout<< "Enter Initial velocity (m/s) :";
   cin>> initialVelocity;

   cout<< "Enter Acceleration (m/s^2) :";
   cin>> acceleration;

   cout<< "Enter Time (s) :";
   cin>> time;

   finalVelocity = initialVelocity + (acceleration * time);

   cout<< "Final Velocity (m/s) :" << finalVelocity << endl;
}