#include <iostream>
using namespace std;

int main()
{
    int secret_number = 99;     //declaration of variables
    int guess = 0;
    
    cout<<"===Simple Guessing Game==="<<endl;
    
    while(guess != secret_number){   //control structure:while loop
        cout<<"Enter Your Guess:";
        cin >> guess;                //read user input
    
        if (guess>secret_number){   // selection structure:Nested IF-ELSE
            cout<<"Too high!Try again."<<endl;
        }
        else if (guess<secret_number){
            cout<<"Too low!Try again."<<endl;
        }
        else{
            cout<<"Congratulation!!You win!"<<endl;
        }
    }
        
    return 0;
}