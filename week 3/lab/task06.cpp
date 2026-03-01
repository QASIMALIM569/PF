#include <iostream>
using namespace std;

main()
{
  
  string name;
  float matricMarks,interMarks,ecatMarks;
  float matricPercentage,interPercentage,ecatPercentage;
  float aggregate;

  cout<<"Enter the student's name :";
  cin>>name;

  cout<<"Enter matriculation marks (out of 1100) :";
  cin>>matricMarks;

  cout<<"Enter intermediate marks (out of 550) : ";
  cin>>interMarks;

  cout<<"Enter Ecat marks (out of 400) :";
  cin>>ecatMarks;

  matricPercentage = (matricMarks / 1100) * 100;
  interPercentage  = (interMarks / 550) * 100;
  ecatPercentage   = (ecatMarks  / 400) * 100;

  aggregate = (matricPercentage * 0.10) + (interPercentage * 0.40) + (ecatPercentage * 0.50);

  cout<<" Aggregate score for " << name <<"is" << aggregate << "%" << endl;

}
  