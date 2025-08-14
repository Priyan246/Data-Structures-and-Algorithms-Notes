#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen = 0, n = fruits.size(), l = 0, r = 0, k = 2;
        unordered_map<int, int> mpp;

        while (r < n) {
            mpp[fruits[r]]++;

            if (mpp.size() > k) {
                while (mpp.size() > k) {
                    mpp[fruits[l]]--;
                    if (mpp[fruits[l]] == 0) {
                        mpp.erase(fruits[l]);
                    }
                    l++;
                }
            }

            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;
    }
};

int main(){
    Solution s;
    vector<int> fruits = {1, 2, 3, 2, 2};
    cout<<s.totalFruit(fruits);

}