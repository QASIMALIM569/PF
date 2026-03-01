#include <iostream>
using namespace std;

main()
{

  string movieName;
  double adultPrice, childPrice, totalAmount, donation, remaining, percentage;
  int adultTickets, childTickets;

  cout<< "Enter the movie name :";
  cin>> movieName;

  cout<< "Enter the adult ticket price : $";
  cin>> adultPrice;

  cout<< "Enter the child ticket price : $";
  cin>> adultPrice;

  cout<< "Enter the number of adult tickets sold :";
  cin>> adultTickets;

  cout<< "Enter the number of child tickets sold :";
  cin>> childTickets;

  cout<< "Enter the percentage of the amount to be donated to charity :";
  cin>> percentage;

  totalAmount = (adultPrice * adultTickets) + (childPrice * childTickets);
  
  donation = (percentage / 100) * totalAmount;
  
  remaining = totalAmount - donation;

  cout<< "Movie :" << movieName << endl;
  cout<< "Total Amount Generated from ticket sales : $" << totalAmount << endl;

  cout<< " Donation to charity(" << percentage << "%) : $" << donation << endl;
  cout<< "Remaining amount after donation : $" << remaining << endl;
}