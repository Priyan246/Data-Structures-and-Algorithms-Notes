#include<bits/stdc++.h>
using namespace std;
int maxpro(vector<int> arr){
    int mini=arr[0];
    int maxpro=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int cost=arr[i]-mini;
        maxpro=max(maxpro,cost);
        mini=min(arr[i],mini);
    }
    return maxpro;

};
int main(){
    vector<int> arr={ 7, 1, 5, 3 , 6, 4};
    cout<<maxpro(arr);
    return 0;

}