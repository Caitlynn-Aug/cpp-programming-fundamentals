#include <iostream>
using namespace  std;

int main()
{
    int i,j;
    int array[5][3] = {{32,20,23},
                       {99,76,30},
                       {67,87,81},
                       {55,67,12},
                       {85,45,19}};
    cout<<"Printing a 2D Array:\n";
    for (int i = 0;i<5;i++)
    {
         
         for (int j = 0;j<3;j++)
         {
             cout <<"\t"<<array[i][j];
         }
         cout<<endl;
    }
    return 0;
}