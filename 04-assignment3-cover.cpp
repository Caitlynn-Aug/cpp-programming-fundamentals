#include <iostream>
using namespace std;

int main()
{
    int min;
    int hour; // 1. Declared the missing variable

    cout << "Enter time in hour(s) : "; // 2. Added missing semicolon
    cin >> hour;
    min = hour * 60;
    
    // 3. Fixed cout arrows (<< instead of >>) and added missing spaces/arrows
    cout << hour << " is equal to " << min << " minutes" << endl; 

    return 0;
}