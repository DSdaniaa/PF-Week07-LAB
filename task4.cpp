#include <iostream>
using namespace std;
int frequencychecker(int num, int digit);
main(){
    int result, num, digit;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a digit: ";
    cin >> digit;
    result=frequencychecker(num,digit);
    cout << result;
}
int frequencychecker(int num, int digit){
    int check=1;
    int count=0;
    while(check!=0){
    check= num%10;
    if(check==digit){
        count=count +1;
    }
     num= num/10;
    }
    return count;

}
