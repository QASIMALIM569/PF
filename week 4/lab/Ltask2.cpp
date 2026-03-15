#include<iostream>
using namespace std;
int main()
{
    int salary = 10000;
    int laptopPrice = 50000;
    int advance;
    int months;

    advance = salary * 0.5 * 6;

    if (advance >= laptopPrice)
    {
        cout << "Ali can buy the laptop with advance salary";
    }
    else
    {
        months = laptopPrice / salary;
        cout << "Months required to buy laptop is: " << months;
    }

}