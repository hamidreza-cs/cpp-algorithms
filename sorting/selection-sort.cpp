#include <iostream>
using namespace std;

int findMaxIndex(int arr[], int size) {
    int maxIndex = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

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

    // Selection Sort
    for(int i = 0; i < n-1; i++) {
        int maxIndex = findMaxIndex(arr, n - i); 
        swap(arr[0], arr[maxIndex]);              
    }

    cout << "Sorted array:   ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}