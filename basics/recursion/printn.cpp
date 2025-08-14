#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
   
    void printNumbers(int n) {
       
    if(n<1) return;
    printNumbers(n-1);
    cout<<n<<"\n";

    }
};
void printn(int i,int n){
    
    if(i>n) return;
    cout<<i;
    printn(i+1,n);

     

}
void println(int i){ //bactrack asc
    if(i<1) return;
    println(i-1);
    cout<<i;
}
void printlnr(int n,int i){ // backtrack desc
    
    if(i>n) return;
    printlnr(n,i+1);
    cout<<i;
    
}
int main(){
    Solution s;
    printlnr(5,1);


}