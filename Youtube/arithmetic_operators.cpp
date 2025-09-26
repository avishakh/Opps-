#include<iostream>
#include<conio.h>

using namespace std;

int main()

{

int num1,num2;


cout << "Enter two numbers : ";

cin >> num1 >> num2;


int sum = num1 + num2;

int sub = num1 - num2;

int mal = num1 * num2;

double div = (float) num1 / num2;                   //this is known as typecasting. ek dhoroner data type theke ounno  data type e convert korai er kaj

int mod = num1 % num2;


cout << "The summation is " << sum << endl;

cout << "The substraction is " << sub << endl;

cout << "The multiplication is " << mal << endl;

cout << "The division is " << div << endl;

cout << "The modulas is " << mod << endl;

getch();

}