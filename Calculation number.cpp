#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter your two number are:";
    cin>>num1>>num2;

    int sum = num1 + num2;
    cout<<"Sum is :"<<sum<<endl;

    int mul = num1 * num2;
    cout<<"Mul is :"<<mul<<endl;

    int sub = num1 - num2;
    cout<<"Sub is :"<<sub<<endl;

    double div = num1 / num2;
    cout<<"Div is :"<<div<<endl;

    double rem = num1 % num2;
    cout<<"Rem is :"<<rem<<endl;

    getch();

}
