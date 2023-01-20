#include <iostream>
using namespace std;
int calculateGCD(int num1,int num2);
int calculateLCM(int num1, int num2, int gcd);
main(){
    int num1,num2,GCD,LCM;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    GCD=calculateGCD(num1,num2);
    LCM=calculateLCM(num1, num2,GCD);
    cout << "GCD: " << GCD<< endl;
    cout << "LCM: " << LCM<< endl;


}
int calculateGCD(int num1,int num2){
    int gcd;
    for(int x=1; x<=num1; x=x+1){
       if(num1%x==0 && num2%x==0){
        gcd=x;

       }

    }
    return gcd;

}
int calculateLCM(int num1, int num2, int gcd){
    int mul, result;
    mul  = num1*num2;
    result= mul/gcd;
    
return result;
}

