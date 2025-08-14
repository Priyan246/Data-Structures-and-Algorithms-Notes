#include<bits/stdc++.h>
using namespace std;
int binsumsub(vector<int> &nums,int goal){
    if(goal<0) return 0;
    int l(0),r(0),count(0),sum(0);
    while(r<nums.size()){
        sum+=nums[r];
        if(sum>goal){
            sum=sum-nums[l];
            l+=1;
        }
        count=count+(r-l+1);
        r+=1;
    }
    return count;
}
int main(){
    vector<int> nums={1,1,0,1,0,0,1};
    int goal=3;
    cout<<binsumsub(nums,goal)-binsumsub(nums,goal-1);

}