#include<bits/stdc++.h>
using namespace std;

vector<int> nextp(vector<int> arr){
    int ind=-1,n=arr.size();
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(arr.begin(),arr.end());
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[ind]){
            swap(arr[i],arr[ind]);
            break;
        }
    }
    reverse(arr.begin()+ind+1,arr.end());
    return arr;


};
int main(){
    vector<int> arr={2,1,5,4,3,0,0};
    vector<int> sample=nextp(arr);
    for(int i=0;i<sample.size();i++){
        cout<<sample[i]<<" ";
    }



}
