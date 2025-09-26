#include<iostream>

using namespace std;

int main()

{

    int year;

    cout << "Enter any year : ";
    cin >> year;


    if (year % 4==0  && year % 100 != 0){                       // if and else if er condition duitah ke || or operator dea jogh korle
                                                                //better hobe , tahole jekoono ekta kaj korleo condiotn kaj korbe
        cout << "It's Leap Year" ;
    }


    else if (year % 400 == 0){
        cout << "It's Leap Year";
    }


    else{cout<<"It's not a Leap year";}


    return 0;
}