#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout <<"How many employees do we have whose salaries we need to calculate?";

    int a;
    cin >> a;

    vector <int> b(a);

    cout << "Enter their working hours in order.";

    for (int i = 0; i < a; i++){
        cin >> b[i];
    }

    cout <<"How much do they earn per hour?";
    int x;
    cin >> x;
    
    for(int i = 0; i < a;i++){
        cout << i + 1 << ':' << b[i] * x << endl;
    }
    return 0;
}