#include<bits/stdc++.h>
using namespace std;
vector<int> find2sum(vector<int> &nums,int target){
     int n=nums.size();
     unordered_map<int,int> hasg;
    for(int i(0);i<n;i++){
        int complem=target-nums[i];
        if(hasg.count(complem)) return {hasg[complem],i};
        hasg[nums[i]]=i;

    }
       return {-1,-1}; 
        
    }

int main(){
   vector<int>  nums = {2,7,11,15};
   vector<int>  req=find2sum(nums,9);
   for(int i(0);i<req.size();i++){
    cout<<req[i]<<" ";

   }

}