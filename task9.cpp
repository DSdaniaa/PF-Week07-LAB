#include <iostream>
using namespace std;
float calculatePrice(float money, int year);
main(){
    float money, result, difference;
    int year;
    cout << "Enter the amonut of money inherited: ";
    cin >> money;
    cout << "Enter Year, until which he has to live in the past: ";
    cin >> year;
    result= calculatePrice(money, year);
    if(result<money){
        difference=money-result;
        cout <<"Yes! He will live a carefree life and will have "<< difference <<" dollars left.";
    }
    else if(money<result){
        difference=result-money;
        cout << "He will need " << difference <<" dollars to survive.";

    }
}
float calculatePrice(float money, int year){
    float even=0;
    float odd=0;
    float total;
    for(int x=1800; x<=year; x=x+2){
        even=even+12000;
    }
    for(int y=1801; y<=year; y=y+2){
        odd=odd+(12000+(50*(18+(y-1800))));
    }
    total=even+odd;
    return total;

}
