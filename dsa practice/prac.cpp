#include<bits/stdc++.h>
using namespace std;

int maxcon1(vector<int> arr,int k){
    int n=arr.size(),maxlen(0),l(0),r(0),zeros(0),len(0);

    while(r<n){
        if (arr[r]==0) zeros++;
        while(zeros>k) {
            if(arr[l]==0) zeros--;
            l++;
        }
        if(zeros<k){
            
            maxlen=max(maxlen,r-l+1);

        }
        r++;
    }
    return maxlen;
};


int main(){
    vector<int> arr={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout<<maxcon1(arr,k);


}