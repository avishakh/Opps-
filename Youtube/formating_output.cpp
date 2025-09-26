#include<iostream>                            //basic of cpp
#include<conio.h>                            // for cleaning code
#include<iomanip>                          // for setprecision




using namespace std;

int main()

{


float num1,num2;


cout << "Enter Two integer : " ;
cin >> num1 >> num2 ;



cout << showpoint ;             // it  used for showing output in points
cout<<fixed;
cout << setprecision(2);

float sum = num1 + num2 ;

cout << setw (50) << "Their summation is " << sum ;
cout << endl ;

//cout << notshowpoint;      // it used for not showing output in points


float sub = num1 - num2 ;

cout<< setw (50) << "Your substraction is " << sub ;
cout << endl;






float mul = num1 - num2 ;


cout<< setw (50) << "Your multiplication is " << mul ;
cout << endl;



double div = num1 / num2 ;

cout << setw (50) << "Their division is " << div;

cout << endl;

/*
int rem = num1 % num2 ;                                 // reminder is used for inly interger data types

cout << " Your reminder is " << rem;*/


getch();

}



/* SHOWPOINT will show all output with points no matter it's 00000 or not
NOSHOWPOINT will stop showing point for some special terms 
SETPRECISION  will discrive how many numbers we wanna show on outout .. for that we need to use a Header file named #iclude iomainp.
FIXED will show how many points we wanna show after point
SETW will helps us to make the output clean , how many space we wanna give on outputs first line*/