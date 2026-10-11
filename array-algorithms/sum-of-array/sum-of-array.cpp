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

    int sume = b[0];
    for(int i = 1; i < a; i++){
        sume += b[i];
    }

    cout << "SUME : " << sume ;
    return 0;
}