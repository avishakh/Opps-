#include<iostream>

using namespace std;


int main()
{

    char ch;

    cout << "Enter a character : ";
    cin >> ch ;



    if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch == 'u'){

        cout << "YES it's a vowel";
    }


    else {
        cout << "It's a consonant" ; 
    }




    return 0;
}