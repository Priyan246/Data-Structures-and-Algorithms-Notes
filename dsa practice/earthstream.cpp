#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Helper function to count number of 1's in binary
int countOnes(int n) {
    int count = 0;
    while (n) {
        count += (n & 1); // Add 1 if last bit is set
        n >>= 1; // Right shift to check next bit
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; ++i)
        cin >> nums[i];

    int M;
    cin >> M;

    // Pair: (number of 1's in binary, value itself)
    vector<pair<int, int>> data;
    for (int num : nums) {
        int ones = countOnes(num);
        data.push_back({ones, num});
    }

    // Sort: first by number of 1s descending, then by value descending
    sort(data.begin(), data.end(), [](pair<int, int>& a, pair<int, int>& b) {
        if (a.first == b.first)
            return a.second > b.second; // Higher number first
        return a.first > b.first; // More 1s first
    });

    // Output top M numbers
    for (int i = 0; i < M; ++i) {
        cout << data[i].second << " ";
    }

    cout << endl;
    return 0;
}
