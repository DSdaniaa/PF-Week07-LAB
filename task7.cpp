#include <iostream>
using namespace std;
void checkpercentage(int digit);
main(){
    int digit;
    cout << "Enter a digit:";
    cin >> digit;
    checkpercentage(digit);
}
void checkpercentage(int digit){
    float p1=0;
    float p2=0;
    float p3=0; 
    float p4=0; 
    float p5=0;
    float check;
    float num1,num2,num3,num4,num5;
    for(int x=1; x<=digit; x=x+1){
        cout <<"Enter a number: ";
        cin >> check;
        if(check>=0 && check<200){
            p1=p1+1;
        }
        else if(check>=200 && check<399){
            p2=p2+1;
        }
        else if(check>=400 && check<599){
            p3=p3+1;
        }
        else if(check>=600 && check<799){
            p4=p4+1;
        }
       else if(check>=800 && check<=1000){
            p5=p5+1;
        }

    }
    num1=(p1/digit)*100.0;
    num2=(p2/digit)*100.0;
    num3=(p3/digit)*100.0;
    num4=(p4/digit)*100.0;
    num5=(p5/digit)*100.0;
    cout << num1 << "%"<<endl;
    cout << num2 << "%"<<endl;
    cout << num3 << "%"<<endl;
    cout << num4 << "%"<<endl;
    cout << num5 << "%"<<endl;

}
