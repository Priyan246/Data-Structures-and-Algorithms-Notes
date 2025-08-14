#include<bits/stdc++.h>
using namespace std;
int  sumn(int n){
    if(n==0) return 0;
    else return n+sumn(n-1);
}
void paramesum(int n,int sum){
    if(n<1){
        cout<<sum;
        return;
    }
    paramesum(n-1,sum+n);

}
int main(){
   // cout<<sumn(4);
    paramesum(4,0);

}