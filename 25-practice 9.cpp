#include <iostream>
using namespace std;

int main()
{
    int balancing_factor; // Pure box declaration with no = 0
    int server_capacity;  // Pure box declaration with no = 0

    server_capacity = 1024; // Initial server bandwidth allotment allocation
    balancing_factor = 2;   // Prime the loop variable manually

    cout << "Server telemetry matrix online" << endl;
    cout << "Initial capacity load: " << server_capacity << endl;

    while (balancing_factor > 1) {
        cout << "Enter division balancing factor (or 1 to exit): ";
        cin >> balancing_factor; // Safely read input straight into the empty variable

        if (balancing_factor > 1) {
            server_capacity = server_capacity / balancing_factor; // Pure long-form division formula
            cout << "Capacity adjusted. Current load: " << server_capacity << endl;
        }
    }

    cout << "Load balancing complete. Operational status locked." << endl;

    return 0;
}