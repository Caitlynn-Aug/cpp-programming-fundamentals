#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    float d,e;
    
    //entering value of a,b,c,d and e
    cout<<"Enter value of a:";
    cin >> a;
    cout<<"Enter value of b:";
    cin >> b;
    cout<<"Enter value of c:";
    cin >> c;
    cout<<"Enter value of d:";
    cin >> d;
    cout<<"Enter value of e:";
    cin >> e;
    
    //find the modulos of a and b
    cout<<"Line 1 - The modulos of a and b is:"<<a % b<<endl;
    
    //find total number of floating number
    cout<<"Line 2 - Total floating number is:"<<a + b<<endl;
    
    //find the product of a,c and e
    cout<<"Line 3 - Product of a,c,and e is:"<<a*c*e<<endl;
    
    //find the average for all value
    cout<<"Average of all product is:"<<(a+b+c+d+e)/5<<endl;

    return 0;
}