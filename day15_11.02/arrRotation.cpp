#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k) {
    int n = arr.size();
    vector<int> temp(n);
    for (int i = 0; i < n - k; i++) {
        if ((i + k) < n)
            temp[i] = arr[i + k];
    }
    for (int i = n - k; i < n; i++) {
        temp[i] = arr[i - (n - k)];
    }
    return temp;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    vector<int> rotatedArr = rotateArray(arr, k);

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Rotated array: ";
    for (int num : rotatedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
