#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    // Extract the first digit
    int first_digit = X;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    // Check if the first digit is even or odd
    if (first_digit % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;

    return 0;
}
