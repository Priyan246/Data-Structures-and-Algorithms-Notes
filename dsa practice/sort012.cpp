#include <bits/stdc++.h>
using namespace std;

vector<int> sortarr(vector<int> arr, int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
    int n = arr.size();

    vector<int> sorted_arr = sortarr(arr, n);

    cout << "Sorted array: ";
    for (int val : sorted_arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
