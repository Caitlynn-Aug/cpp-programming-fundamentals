#include <iostream>
using namespace std;

int main()
{
    int ping;
    int total_latency;
    
    total_latency = 0;
    ping = -1;
    
    cout<<"Signal monitoring subsystem online"<<endl;
    
    while(ping!=0){
        cout<<"Enter connection ping (or 0 to stop):";
        cin >> ping;
        
        if (ping>0){
            total_latency = total_latency + ping;
            cout<<"Accumulate network lag:"<<endl;
        }
    }
    
    cout<<"Subsystem offline"<<endl;
  
    return 0;
}