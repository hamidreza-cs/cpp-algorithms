#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> a = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };


    vector<vector<int>> b = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = a.size();
    int cols = a[0].size();

    vector<vector<int>> result(rows, vector<int>(cols));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result[i][j] = a[i][j] - b[i][j];      
        }
    }

    cout << "Result:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}