#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    cin >> a;

    vector <int> b(a);

    for(int i = 0; i < a; i++){ //cin array
        cin >> b[i];
    }

    int temp;

    for(int i = 0; i < a; i++){    //sorting

        for(int j = 0 ; j < a - i - 1; j++){
            if(b[j] > b[j + 1]){
                temp = b[j + 1];
                b[j + 1] = b[j];
                b[j] = temp;
            }
        }
    }

    int first = 0, last = a - 1, mid = (first + last) / 2;
    int question, answer = -1;
    cin >> question;

    while(first <= last){
        if(b[mid] >= question){
            if(b[mid] == question){
                answer  = mid;
                break;
            }
            else{
                last = mid - 1;
                mid = (first + last) / 2;
            }
        }
        else{
            first = mid + 1;
            mid = (first + last) / 2;
        }
    }

    if(answer == -1)cout << "not found";
    else cout << "answer : " << answer + 1 ; 

    return 0;
}