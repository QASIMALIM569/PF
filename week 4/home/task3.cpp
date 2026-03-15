#include<iostream>
using namespace std;
main(){
 int city1, city2, Difference;
cout<<"enter the temperature of city 1 : ";
cin>> city1;
cout<<"enter the temperature of city 2 : ";
cin>> city2;
Difference = city1 - city2;
if (Difference > 10){
    cout <<"Difference is too big"<<endl;
}
cout <<"Program Ends";
}