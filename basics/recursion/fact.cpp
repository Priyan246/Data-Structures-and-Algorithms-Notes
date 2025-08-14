#include<bits/stdc++.h>
using namespace std;
int  factn(int n){
    if (n==0 ||n==1) return 1;
    return n*factn(n-1);


}
void factnpar(int n,int pro){
    if(n<1) {cout<<pro; return;}
    factnpar(n-1,n*pro);
    


}

int main(){
    //cout<<factn(5);
    factnpar(6,1);

}