#include<bits/stdc++.h>
using namespace std;
 int linearSearch(vector<int>& nums, int target) {
        for(int i(0);i<nums.size();i++){
            if(nums[i]==target) return i;

        }
        return -1;
    }
int main(){
    vector<int> arr={2, 3, 4, 5, 3};
    cout<<linearSearch(arr,1);

}