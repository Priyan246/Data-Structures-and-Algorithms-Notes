#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDigit(int n) {
        int temp=n,count(0);
        while(temp>0){
            count+=1;
            temp/=10;

        }
        return count;
        
    }
};
int main(){
    int n=20;
    Solution s;
    cout<<s.countDigit(n);

}