#include <iostream>
using namespace std;

int main()  //main function
{
    int num1,num2;
    cout<<"Enter first interger:";
    cin >> num1;
    
    cout<<"Enter second integer:";
    cin >> num2;
    
    //compare num1 is equal to num2
    if (num1==num2){
        cout<<num1<<"is equal"<<num2<<endl;}
        
    //compare num1 is not equal to num2
    if (num1 != num2){
        cout<< num1 <<"is less equal"<<num2<<endl;}
        
    //compare num1 is less than num2
    if (num1<num2){
        cout<<num1<<"is less than"<<num2<<endl;}
        
    //compare num1 is more than or equal to num2
    if (num1 >=num2){
        cout<<num1<<"is more than or equal"<<num2<<endl;}

    return 0;
}   // end function