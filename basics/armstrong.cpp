#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
        int count(0),temp(n),temp2(0),temp3(n),rem(0);
        while(temp>0){
            temp/=10;
            count+=1;

        }
        
        while(temp3>0){
            rem=temp3%10;
            temp2=temp2 + pow(rem,count);
            temp3/=10;
        }
        return n==temp2;
        

    }
};
int main(){
    Solution s;
    if(s.isArmstrong(153)){
        cout<<"true";
    }
    else  cout<<"false";
}