#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
        if(arr[j] > arr[j + 1] )swap(arr[j],arr[j +1]);
        }
    }
    
    cout << "Sorted array:   ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}