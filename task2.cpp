#include <iostream>
using namespace std;
void fibonacci(int x);
main(){
    int num;
    cout << "how many numbers in the series: ";
    cin >> num;
    fibonacci(num);

}
void fibonacci(int num){
    int n1=0;
    int n2=1;
    int next=0;
    for( int x=1; x<=num; x=x+1){
        cout << next <<endl;
        n1=n2;
        n2=next;
        next=n1+n2;
        

    }
}