#include <iostream>
using namespace std;

int main()
{
    int current_stock = 100;
    int quantity_sold = 0;
    
    cout<<"===Inventory Management System==="<<endl;
    cout<<"Initial Stock Level:"<<current_stock<<"units."<<endl;
    cout<<"--------------------------------------"<<endl;
    
    while (current_stock>0){
        cout<<"Enter quantity sold (or 0 to exit):";
        cin >>quantity_sold;
        
        if (quantity_sold == 0){
            break;
        }
        
        if (quantity_sold > current_stock){
            cout<<"Error:Not enough stock available!Current stock:"<<current_stock<<endl;
            cout<<"-------------------------------------------------"<<endl;
        }
        else{
            current_stock = current_stock - quantity_sold;
            cout<<"Transaction successful.Remaining stock:"<<current_stock<<"units."<<endl;
            cout<<"-------------------------------------------------"<<endl;
        }
    }
    
    cout<<"\n================================"<<endl;
    cout<<"System closed.Finsl stock level:"<<current_stock<<"units"<<endl;
    cout<<"Goodbye!"<<endl;

    return 0;
}