#include <iostream>
using namespace std;

main()
{
  
   int minutes, fps, totalFrames;

   cout<< " Number of Minutes :";
   cin>> minutes;

   cout<< "Frames per Second :";
   cin>> fps;

   totalFrames = minutes * 60 * fps;

   cout<< "Total Number of Frames :" << totalFrames << endl;

}