#include <iostream>
using namespace std;

int main()
{
    int secret_key;
    int user_attempt;
    
    cout<<"Security decryption bypass initialized"<<endl;
    
    while (user_attempt != secret_key){
        cout<<"Enter key code:";
        cin >> user_attempt;
        
        if(user_attempt == secret_key){
            cout<<"Access granted.System unlocked."<<endl;
        }
        else{
            cout<<"Access denied.Target matrix locked"<<endl;
        }
    }
    
    return 0;
}