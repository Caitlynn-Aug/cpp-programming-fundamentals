#include <iostream>
using namespace std;

int main()
{
    
    int sector_distance;  // Direct box declaration with no = 0
    int total_orbit;      // Direct box declaration with no = 0

    total_orbit = 0;       // Set starting total manually
    sector_distance = 0;   // Prime the loop variable manually

    cout << "Space probe tracking matrix online" << endl;

    while (sector_distance != -1) {
        cout << "Enter sector distance (or -1 to stop): ";
        cin >> sector_distance; // Safe direct storage into the empty box

        if (sector_distance > 0) {
            total_orbit = total_orbit + sector_distance; // Long-form standard math formula
            cout << "Current total distance: " << total_orbit << endl;
        }
    }
    
       cout << "Tracking terminated. Final log uploaded." << endl;

    return 0;
}