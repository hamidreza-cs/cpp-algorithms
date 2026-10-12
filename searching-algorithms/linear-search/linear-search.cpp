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

    int question, answer = -1;
    cin >> question;

    for(int i = 0; i < a; i++){
        if(b[i] == question){
            answer  = i;
            break;
        }
    }
    
    if(answer == -1)cout << "not found";
    else cout << "answer : " << answer + 1 ; 

    return 0;
}