#include<iostream>
using namespace std;
main(){
    int holidays, working_days, gametime, diff, hours, mint;
cout <<"Holidays : ";
cin>> holidays;
 working_days = 365 - holidays;
 gametime = (working_days*63) + (holidays*127);
 diff = 30000 - gametime;
 hours = diff/60;
 mint = diff%60;
if (gametime > 30000){
    cout<<"Tom will run away";
    cout <<hours <<"hours and "<<mint <<" minutes for play";
}
else{
     cout << "Tom sleeps well" << endl;
    cout <<hours <<"hours and "<<mint <<" minutes less for play";
}
}