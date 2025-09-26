#include<iostream>
using namespace std ;

int main()
{
    int A , B;

    cout << "Enter your inputs :" ;
    cin >> A >> B;

    if (A % B == 0 || B % A==0){

        cout << "Multiples";

    }


    else { cout << "No Multiples" ;}



    return 0 ;
}