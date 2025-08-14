#include<bits/stdc++.h>
using namespace std;
int countSubarray(vector<int> &nums, int target){
    map<int,int> mpp;
    mpp[0]=1;
    int cnt(0),sum(0);
    for(int i(0);i<nums.size();i++){
        sum+=nums[i];
        int removals=sum-target;
        cnt+=mpp[removals];
        mpp[sum]+=1;


    }
    return cnt;
        
    }

int main(){
   vector<int> nums = {10, 5, 2, 7, 1, 9};
    int  k=15;
    cout<<countSubarray(nums,k);

}