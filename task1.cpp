#include <iostream>
using namespace std;
void table(int x);
main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    table(num);

}
void table(int num){
    int mul;
    for (int x=1; x<=10; x=x+1){
        mul =num*x;
        cout << num << " x "<< x << " = "<< mul<< endl;
    }
}