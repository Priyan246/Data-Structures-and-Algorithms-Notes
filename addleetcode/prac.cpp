#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int n=nums.size(),l(0),r(0),k(0),curele(0);
    for(int r(1);r<n;r++){
        if(nums[r]!=nums[l]){
            l++;
            nums[l]=nums[r];
        }

    } return l+1;
}

int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums);
}