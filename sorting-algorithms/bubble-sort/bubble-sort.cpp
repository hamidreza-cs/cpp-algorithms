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

    int temp;

    for(int i = 0; i < a; i++){

        for(int j = 0 ; j < a - i - 1; j++){
            if(b[j] > b[j + 1]){
                temp = b[j + 1];
                b[j + 1] = b[j];
                b[j] = temp;
            }
        }
    }

    for(int i = 0; i < a; i++){
        cout << b[i] << " ";
    }

    return 0;
}