#include <iostream>
#include <vector>
using namespace std;

int main(){

    int a;
    cin >> a;

    vector <int> b(a);

    for(int i = 0; i < a; i++){
        cin >> b[i];
    }

    int temp;

    for(int i = 0; i < a - 1; i++){

        int maxnumber = 0, max = b[0];

        for(int j = 0 ; j < a - i ; j++){  //find max ans maxnumber
            if(max < b[j]){
                max = b[j];
                maxnumber = j;
            }
        }
        temp = b[a - 1 - i];    
        b[a - i - 1] = b[maxnumber];
        b[maxnumber] = temp;        
        
    }

    for(int i = 0; i < a; i++){
        cout << b[i] << " ";
    }

    return 0;
}