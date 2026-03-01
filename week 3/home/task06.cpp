#include <iostream>
using namespace std;

main()
{
   
    double weight, cost, area, costPerPound, costPerSquareFoot;

    cout<< "Enter the size of the fertilizer bag in pounds :";
    cin>> weight;
   
    cout<< "Enter the cost of the bag : $";
    cin>> cost;

    cout<< "Enter the area in square feet that can be covered by the bag :";
    cin>> area;

    costPerPound = cost / weight;
    costPerSquareFoot = cost / area;

    cout<< "Cost of fertilizer per pound is :$" << costPerPound << endl;
    cout<< "Cost of fertilizing per square foot is : $" << costPerSquareFoot << endl;
}