#include <iostream>
using namespace std;

int main()  
{
    float num1,num2,num3,num4;
    float sum,product,result;
    
    cout<<"Please insert four decimal number"<<endl;
    cout<<"1=";
    cin >> num1;
    cout<<"2=";
    cin >> num2;
    cout<<"3=";
    cin >> num3;
    cout<<"4=";
    cin >> num4;
    
    //sum of four decimal numbers
    sum=num1+num2+num3+num4;
    
    //product of four deecimal numbers
    product = num1*num2*num3*num4;
    
    //result deduct four decimal numbers
    result=num1-num2-num3-num4;
    
    cout<<"Sum four decimal number are:"<<sum<<endl;
    cout<<"Product four decimal number:"<<product<<endl;
    cout<<"Result deduct four decimal numbers:"<<result<<endl;
    
    return 0;
}   