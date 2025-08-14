#include <bits/stdc++.h>
using namespace std;

int maxcon1(vector<int> arr, int k) {
    int l = 0, r = 0;
    int maxlen = 0;
    int zeros = 0;
    while(r<arr.size()){
        if(arr[r]==0) zeros++;
        if(zeros>k){
            if(arr[l]==0) zeros--;
            l++;
        }
        if(zeros<=k){
            maxlen=max(r-l+1,maxlen);

        }
        r++;

    }

    

    return maxlen;
}

int main() {
    vector<int> arr = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    cout << maxcon1(arr, k);  // Output: 6
}

