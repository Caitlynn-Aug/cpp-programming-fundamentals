#include <iostream>
using namespace std;

int main()
{
    int array[3][2] = {{2, -5},
                       {4, 0},
                       {9, 1}};

    // use of nested for loop
    // access rows of the array
    for (int i = 0; i < 3; ++i) {

        // access columns of the array
        for (int j = 0; j < 2; ++j) {
            cout << "array[" << i << "][" << j << "] = " << array[i][j] << endl;
        }
    }

    return 0;
}