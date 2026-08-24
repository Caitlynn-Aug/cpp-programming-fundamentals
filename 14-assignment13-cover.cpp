#include <iostream>
using namespace  std;

int main()
{
    int array[10]={2,8,9,13,25,30,45,60,77,89};
    
    //loop runs from index 0 up to index 8
    for (int i=0;i<10;i+=2){
        cout<<"array["<<i<<"]:"<<array[i]<<endl;
    }
    
    return 0;
}