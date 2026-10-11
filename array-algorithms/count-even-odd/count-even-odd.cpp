#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    cin >> a;

    vector<int> b(a);  
    
    for(int i = 0; i < a; i++){
        cin >> b[i];
    }

    int evencount = 0;
    int oddcount = 0;

    for(int i = 0; i < a; i++){
        if (b[i] % 2 == 0)
        evencount++ ;
        else
        oddcount++ ;
    }

    cout << "Even :" << evencount << "   " << " Odd :" <<  oddcount;
    return 0;
}