#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    cin >> a;

    vector <int> b(a);

    for(int i = 0; i < a; i++){
        cin >> b[i];
    }

    
    for(int i = 1; i < a; i++){
    int key = b[i];
    int j = i;

    while(j > 0 && b[j-1] > key){
        b[j] = b[j-1];
        j--;
    }
    b[j] = key;
    }


    for(int i = 0; i < a; i++){
        cout << b[i] << " ";
    }

    return 0;
}