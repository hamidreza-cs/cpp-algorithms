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

    int sum = 0;
    for(int i = 0; i < a; i++){
        sum += b[i];
    }

    cout << sum;
    return 0;
}