#include <iostream>
using namespace std;

int main()
{
    int myNum;
    float myFloatNum;
    char myLetter;
    string myText;

    cout<<"Please enter a number for myNum : ";
    cin>>myNum;
    cout<<"Please enter a number for myFloatNum : ";
    cin>>myFloatNum;
    cout<<"Please enter a letter for myLetter : ";
    cin>>myLetter;
    cout<<"Please enter a text for myText : ";
    cin>>myText;

    cout<<"myNum : "<<myNum<<endl;
    cout<<"myFloatNum : "<<myFloatNum<<endl;
    cout<<"myLetter : "<<myLetter<<endl;
    cout<<"myText : "<<myText<<endl;

    return 0;
}