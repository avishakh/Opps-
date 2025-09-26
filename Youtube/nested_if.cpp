// kono condition er modde condition add kora tai nested 

// eikhane if er modde if add korte jacchi etai eta nested if condition



#include <iostream>
using namespace std;
int main()

{
    int mark ;

    cout << "Enter your mark : ";
    cin >> mark;

    if(mark > 39){


        if (mark >= 80){
            cout <<"A+";
        }


        else if (mark >= 75){
            cout << "A";
        }

        else if (mark >= 70){
            cout << "A-";
        }

    }


    else { cout << " You are fail";}


    return 0 ;
}