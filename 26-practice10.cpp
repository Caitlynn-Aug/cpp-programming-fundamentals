#include <iostream>
using namespace std;

int main()
{
    int cooling_drop;
    int system_temperature;
    
    system_temperature = 50;
    cooling_drop = 0;
    
    cout<<"Environmental telemetry system active"<<endl;
    cout<<"Initial server core temperature:"<<system_temperature<<endl;
    
    while (system_temperature>20){
        cout<<"Enter cooling drop value:";
        cin >> cooling_drop;
        
        if (cooling_drop>0){
            system_temperature = system_temperature - cooling_drop;
            cout<<"Cooling applied.Current core temperature:"<<system_temperature<<endl;
        }
    }
    
    cout<<"Target threshold reached.Climate matrix stabilized."<<endl;

    return 0;
}