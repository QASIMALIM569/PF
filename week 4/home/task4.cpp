#include<iostream>
using namespace std;

main()

{
    int redrose, whiterose, tulips;
    float redroseprice, whiteroseprice, tulipsprice, total_price, discount;
    cout << "Red roses: ";
    cin>> redrose;

    cout << "White roses: ";
    cin>> whiterose;

    cout << "Tulips: ";
    cin>> tulips;

    redroseprice=redrose*2.00;

    whiteroseprice=whiterose*4.10;

    tulipsprice=tulips*2.50;

    total_price=redroseprice+whiteroseprice+tulipsprice;
    cout<<"Original price: "<<total_price <<endl;

    if(total_price>200)
    {
        discount=total_price-(total_price*0.2);

        cout << "Price after discount: "<<discount;
    }
}