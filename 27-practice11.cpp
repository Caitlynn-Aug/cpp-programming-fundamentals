#include <iostream>
using namespace std;

int main()
{
   int crate_weight;
   int total_payload;
   
   total_payload = 0;
   crate_weight = 0;
   
   cout<<"Cargo by allocation subsystem active"<<endl;
   cout<<"Maximum dron capacity limit:500"<<endl;
   
   while(total_payload<500){
       cout<<"Enter crate weight:";
       cin >> crate_weight;
       
       if(crate_weight > 0){
           total_payload = total_payload - crate_weight;
           cout<<"Crate loaded.Current total payload:"<<total_payload<<endl;
       }
   }
   
   cout<<"Maximum threshold reached.Cargo bay doors locked."<<endl;
   
    return 0;
}