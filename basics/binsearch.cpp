#include<bits/stdc++.h>
using namespace std;
int retindex(int arr[],int n,int target){
    int low(0),high(n-1),mid;
    while(low<=high){
        mid=(low+high)/2;
        
        if(arr[mid]==target) return mid;
        if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;

        }
    }
    return -1;
}
int retindexrecurs(int arr[],int low,int high,int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]>target) retindexrecurs(arr,low,mid-1,target);
    else {retindexrecurs(arr,mid+1,high,target);}
}
int main(){
    int arr1[]={1,2,3,4,5};
    cout<<retindex(arr1,5,3);
    cout<<retindexrecurs(arr1,0,4,3);




}