#include <iostream>
using namespace std;

int main()
{
    int defense_patch; // Pure box declaration with no = 0
    int active_threat; // Pure box declaration with no = 0

    active_threat = 100; // Starting threat security level metric
    defense_patch = 0;   // Prime the loop variable manually

    cout << "Active network containment protocols engaged" << endl;
    cout << "Initial threat score: " << active_threat << endl;

    while (active_threat > 0) {
        cout << "Enter defense patch mitigation value: ";
        cin >> defense_patch; // Safely read input straight into the empty variable

        if (defense_patch > 0) {
            active_threat = active_threat - defense_patch; // Pure long-form subtraction formula
            cout << "Mitigation recorded. Current threat level: " << active_threat << endl;
        }
    }

    cout << "Threat neutralized. Network integrity restored." << endl;

    return 0;
}