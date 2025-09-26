#include<iostream>
using namespace std;

double addition(double a, double b) // Function definition before main
{
    double sum = a + b;
    return sum;
}

int main()
{
    cout << addition(20.35, 10.14);
    return 0;
}