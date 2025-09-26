#include <iostream>
using namespace std;

int main() {
    int x = 90;
    int y = 10;

    int *p1, *p2; // Correctly declare pointers

    p1 = &x; // Assign address of x
    p2 = &y; // Assign address of y

    int sum = *p1 + *p2; // Dereference pointers to access values
    cout << sum; // Output: 100

    return 0;
}
