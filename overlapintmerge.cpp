#include <bits/stdc++.h>
using namespace std;

/*vector<vector<int>> merovintbrute(vector<vector<int>> &arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end()); // sort by start time
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        int start = arr[i][0];
        int end = arr[i][1];

        if (!ans.empty() && end <= ans.back()[1]) {
            continue; // current interval is completely covered
        }

        for (int j = i + 1; j < n; j++) {
            if (arr[j][0] <= end) {
                end = max(end, arr[j][1]);
            } else {
                break;
            }
        }

        ans.push_back({start, end});
    }

    return ans; // <-- missing in original code
}*/
vector<vector<int>> merovint2(vector<vector<int>> &arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end()); // sort by start time
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        if(ans.empty() || arr[i][0] >ans.back()[1]){
            ans.push_back(arr[i]);

        }
        else{
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
    }

    return ans; // <-- missing in original code
}

int main() {
    vector<vector<int>> intervals = {
        {1, 3}, {2, 6}, {8, 10}, {15, 18}, {17, 20}
    };

    vector<vector<int>> merged = merovint2(intervals);

    cout << "Merged Intervals:\n";
    for (auto &interval : merged) {
        cout << "[" << interval[0] << ", " << interval[1] << "]\n";
    }

    return 0;
}
