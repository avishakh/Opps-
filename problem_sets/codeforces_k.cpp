#include <iostream>
#include <algorithm>  

using namespace std;

int main() 


{
    int A, B, C;
    
   
    cin >> A >> B >> C;

    
    int min_num = min({A, B, C});
    int max_num = max({A, B, C});

   
    cout << min_num << " " << max_num << endl;

    return 0;
}
