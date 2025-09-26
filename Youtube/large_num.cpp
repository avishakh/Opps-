#include<iostream>

using namespace std ;

int main()

{

    int num1 , num2 , num3 ;

    cout <<"Enter Three Numbers : ";

    cin >> num1 >> num2 >> num3;


    if (num1 > num2 && num1 > num3){

        cout << "NUMBER ONE IS THE LARGE NUMBER" ;
    }


    else if (num2 > num1 && num2 > num3){

        cout<< "NUMBER TWO IS THE LARGE NUMBER";
    }


    else { cout <<"NUMBER THREE IS THE LARGE NUMBER";}




    return 0;
}