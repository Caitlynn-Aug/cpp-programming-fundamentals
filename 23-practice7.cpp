#include <iostream>
using namespace std;

int main()
{
     int booster_multiplier; // Pure box declaration with no = 0
    int calculated_payload; // Pure box declaration with no = 0

    calculated_payload = 10; // Base starting payload weight units
    booster_multiplier = 1;  // Prime the loop variable manually

    cout << "Rocket propulsion calculation tracking online" << endl;

    while (booster_multiplier != 0) {
        cout << "Enter stage multiplier factor (or 0 to stop): ";
        cin >> booster_multiplier; // Directly populating the empty box

        if (booster_multiplier > 0) {
            calculated_payload = calculated_payload * booster_multiplier; // Pure long-form multiplication formula
            cout << "Updated payload calculation: " << calculated_payload << endl;
        }
    }

    cout << "Calculation complete. Ignition matrix locked." << endl;
   
    return 0;
}