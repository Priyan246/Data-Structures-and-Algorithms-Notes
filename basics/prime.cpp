#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        int cnt(0);
        for(int i(1);i<=sqrt(n);i++){
            if (n%i==0){
                cnt++;
                if(i != (n/i)) cnt++;
            
            } 
            
        }
        if(cnt==2) return true;
        else return false;
    }
};

    int main(){
        Solution s;
        bool sampl=s.isPrime(12);
        if(sampl) cout<<"yes";
        else cout<<"no";
        
    }