#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> a = {
        {5, 12, 7},
        {3, 20, 8},
        {15, 2, 9}
    };

    int rows = a.size();
    int cols = a[0].size();

    int maxVal = a[0][0];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(a[i][j] > maxVal){
                maxVal = a[i][j];
            }
        }
    }

    cout << "Max: " << maxVal << endl;

    return 0;
}