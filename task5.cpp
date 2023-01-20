#include <iostream>
using namespace std;
int sumdigit(int num);
main(){
    int num, result;
    cout << "Enter a number: ";
    cin >> num;
    result= sumdigit(num);
    cout << result;

}
int sumdigit(int num){
    int x=0;
    int sum=0;
    int digit;

    while(num!=0){
        x=x+1;
        digit =num%10;
        sum= sum+digit;
        num=num/10;

    }
    return sum;
}