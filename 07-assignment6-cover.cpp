#include <iostream>
using namespace std;

int main()
{
    const int SIZE=10;
    int num [SIZE]={1,2,3,4,5,6,7,8,9,10};
    int total=0;
    for (int i =1;i<10;i++)
    {
        total +=num[i];
    }
    cout<<"Summary of array:"<<total;
    
    return 0;
}