#include <iostream>
using namespace std;
float calculateMoney(int age, int price, int price1);
main(){
    int age;
    float priceM, result, difference;
    int priceT;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter Price of the washing machine: ";
    cin >> priceM;
    cout << "Enter Unit price of each toy: ";
    cin >> priceT;
    result= calculateMoney( age, priceT, priceM);
    if(result>priceM){
        difference=result-priceM;
        cout << "YES!" << endl << difference;

    }
    if(result<priceM){
        difference=priceM-result;
        cout << "No!" << endl << difference;

    }

    
}
float calculateMoney(int age, int priceT, int priceM){
    float moneyT=0;
    float money=0;
    float result;
    for(int x=1; x<=age; x=x+1){
        
        if(x%2==0){
            money=money+(x/2)*10-1;
            
        }
        else{
            moneyT=moneyT+priceT;
          
        }
        
    }
    result= moneyT+money;
    return result;


}
