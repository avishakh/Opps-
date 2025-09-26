#include<iostream>

using namespace std ;

int main()

{


    int n , row , col ;

    cout << "Enter your number : " ;

    cin >> n ;


    for (row = 1 ; row <= n ; row ++){

        for (col = 1 ; col <= row ; col ++){


            cout << " * "  ;
        }

        cout << endl;

    }


    for (row = 1 ; row <= n ; row ++){

        for (col = 1 ; col <= row ; col ++){


            cout << " * "  ;
        }

        cout << endl;

    }




    return 0 ;
}