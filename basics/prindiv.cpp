#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> nums;
        for(int i=1;i<=n;i++){
            if(n%i==0) nums.push_back(i);
        }
        return nums;

    }
};

    int main(){
        Solution s;
        vector<int> sampl=s.divisors(36);
        for(int i:sampl){
            cout<<i<<" ";
        }
    }