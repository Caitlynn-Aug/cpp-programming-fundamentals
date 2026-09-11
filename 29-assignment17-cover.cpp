#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double temps[4][3];
    double highestTemp=0;
    
    cout<<"Enter Temperature reading:\n\n";
    
    for(int i=0;i<4;i++){
        cout<<"Day:"<<i<<endl;
        for(int j=0;j<3;j++){
            cout<<"Reading "<<j<<" :";
            cin >>temps[i][j];
        }
        cout<<"\n";
    }
    
    cout<<"Temperature Record"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"\tReading 0 Reading 1 Reading 2"<<endl;
    
    for(int i=0;i<4;i++){
        cout<<"Day"<<i<<"\t     ";
        for(int j=0;j<3;j++){
            cout<<temps[i][j]<<"\t    ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    
     cout<< "Average Temperature\n";
    for (int i = 0; i < 4; i++) {
        double daySum = 0;
        for (int j = 0; j < 3; j++) {
            daySum += temps[i][j];
            
            if (temps[i][j] > highestTemp) {
                highestTemp = temps[i][j];
            }
        }
        double average = daySum / 3.0;
        cout << "Day " << i << " : " << fixed << setprecision(2) << average << "°C\n";
    }
    cout << "\n";

    cout << "Highest Temperature : " << setprecision(0) << highestTemp << "°C\n";

    return 0;
}