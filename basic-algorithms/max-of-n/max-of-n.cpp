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

    int max = b[0];
    for(int i = 1; i < a; i++){
        if(max < b[i])
            max = b[i];
    }

    cout << max;
    return 0;
}