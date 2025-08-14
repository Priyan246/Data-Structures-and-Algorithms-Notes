#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int i, int arr[], int n) {
    if (i >= n / 2) return true;
    if (arr[i] != arr[n - i - 1]) return false;
    return isPalindrome(i + 1, arr, n);
}
bool isPalindromes(int i, string &s) {
    if (i >= s.size() / 2) return true;
    if (s[i] != s[s.size() - i - 1]) return false;
    return isPalindromes(i + 1, s);
}


int main(){
    int low,high;

    int arr[]={1,2,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    string s="madsm";
    
    low=0;high=n-1;
    while(low<high){
            swap(arr[low],arr[high]);
            low++;
            high--;

        }
        
        

    for(int i:arr){
        cout<<i;
        

    }
    if(isPalindrome(0,arr,4)){
        cout<<"true";
    }
    else{
        cout<<"false";

    }

    cout<<isPalindromes(0, s);

}
