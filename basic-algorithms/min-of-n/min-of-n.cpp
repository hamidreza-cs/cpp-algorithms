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

    int min = b[0];
    for(int i = 1; i < a; i++){
        if(min > b[i])
            min = b[i];
    }

    cout << min;
    return 0;
}