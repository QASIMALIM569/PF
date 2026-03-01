#include <iostream>
using namespace std;

main()
{
  
  int n, sum;
 
  cout<< "Enter the number of sides of the polygon :";
  cin>> n;

  sum = (n-2) * 180;

  cout<< "The total sum of internal angles of a " << n << "sided polygon is :" << sum << "degrees" << endl;

}