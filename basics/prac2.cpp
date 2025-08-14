#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(int n) {
    int temp1(n),temp2(0),rem;
    while(n>0){
        rem=n%10;
        temp2=temp2*10+rem;
        n/=10;
    }
    if(temp2==temp1) return true;
    return false;


    }
    int main(){
        cout<<bool(isPalindrome(121));
    }