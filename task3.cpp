#include <iostream>
using namespace std;
int totaldigit(int digit);
main(){
    int digit, result;
    cout << "Enter a digit: ";
    cin >> digit;
    result= totaldigit(digit);
    cout << result;

}
int totaldigit(int digit){
    
    int x=0;
    while(digit!=0){
        x=x+1;
        digit=digit/10;
    }
    return x;
}