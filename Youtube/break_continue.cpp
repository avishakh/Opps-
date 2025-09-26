#include<iostream>

using namespace std;

int main()


{

    for (int i =1 ; i <= 100 ; i+=2)
    {
                                                        //break statement er kaj hoilo ber kore dwa , loop take sesh kore fela
                                     //continue statement er kaj hoilo condition nah mille , just oi part tuku skip kore loop challeya jawa

        if( i==10){

            break;
        }

        cout << i << endl;

    }


    return 0 ;
}