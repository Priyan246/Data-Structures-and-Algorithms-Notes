#include<bits/stdc++.h>
using namespace std;
  int flast,slast;

int findfibon(int n){
    int flast,slast;

    if(n<=1) return n;
    else{
         flast=findfibon(n-1);
         slast=findfibon(n-2);
    }
    return flast+slast;
}
int findfibon2(int n){
  

    if(n<=1) return n;
    else{
         return findfibon2(n-1)+findfibon2(n-2);
    }
    return flast+slast;
}
int main(){
    cout<<findfibon(6);
    cout<<findfibon2(6);

}