#include <iostream>
using namespace std;

int main()
{
    double sales[7];
    double totalSALES = 0;
    
    cout<<"Enter sales amount for 7 days:"<<endl<<endl;
    
    for(int i=0;i<7;i++){
        cout<<"Day"<<(i+1)<<":";
        cin >> sales[i];
    }
    
    double highestSALES=sales[0];
    
    cout<<"\nWeekly Sales:"<<endl;
    cout<<"---------------------\n";
    
    for(int i=0;i<7;i++){
        cout<<"Day"<<(i+1)<<"RM"<<sales[i]<<endl;
        
        totalSALES += sales[i];
        
        if(sales[i]>highestSALES){
            highestSALES = sales[i];
        }
    }
    
    cout<<"\nTotal sales:RM"<<totalSALES<<endl;
    cout<<"Highest Sales:RM"<<highestSALES<<endl;

    return 0;
}