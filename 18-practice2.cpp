#include <iostream>
using namespace std;

int main()
{
    int sum = 0;            //variable declaration and initialization
    int inputNumber=0;
    
    cout<<"===Infinite Adder Calculator==="<<endl;
    
    cout<<"Enter a number(or 0 to stop):";        //prompt the user for the first input
    cin >> inputNumber;
    
    while (inputNumber!=0){              //control structure :while loop 
                                          //the loop continues runningas long as the user does nit enter 0
        sum = sum+inputNumber;              //accumulate the input into the total sum 
        cout<<"Current sum :"<<sum<<endl;   //display current process
        cout<<"-------------------------------"<<endl;
        cout<<"Enter next Number (or 0 to stop):"<<endl;  //prompt for the next input to avoid an infinite loop
        cin >>inputNumber;
    }
    cout<<"\n=============================="<<endl; //final output when the loop terminates
    cout<<"Total sum is:"<<sum<<endl;
    cout<<"Goodbye!"<<endl;

    return 0;
}