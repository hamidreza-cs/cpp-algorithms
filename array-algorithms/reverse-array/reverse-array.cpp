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

    int temp;

    for(int i = 0; i < a / 2; i++){
        temp = b[i];
        b[i] = b[b.size() - 1 - i];
        b[b.size() - 1 - i] = temp; 
    }

    for(int i = 0; i < a; i++){
        cout << b[i] << " " ;
    }

    return 0;
}
