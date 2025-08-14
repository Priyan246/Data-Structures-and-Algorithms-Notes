#include<bits/stdc++.h>
using namespace std;
int retreverse(int n){
    int temp(0),rem;
    while(n>0){
        rem=n%10;
        temp=temp*10+rem;
        n=n/10;
    }
    return temp;
}
int main(){
    cout<<retreverse(123);

}