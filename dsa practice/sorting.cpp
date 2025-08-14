#include<bits/stdc++.h>
using namespace std;
void swapmy(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}
void selsort(vector<int> &arr){

    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]) {
                mini=j;
                }
    }
    swapmy(arr[i],arr[mini]);}
}
void bubsort(vector<int> &arr){
    int n=arr.size(),didswap(0);
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swapmy(arr[j],arr[j+1]);
                 didswap+=1;}
        }
        if(didswap==0)break;
    }
}
void inssort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swapmy(arr[j],arr[j-1]);
            j--;
        }
    }
}
void merged(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left(low),right(mid+1);
    while((left<=mid) && (right<=high)){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    
}
void ms(vector<int> &arr,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merged(arr,low,mid,high);

}

void mergesort(vector<int> &arr,int n){
    ms(arr,0,n-1);

}
int partitionf(vector<int> &arr,int low,int high){
    int pivot=arr[low],i(low),j(high);
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swapmy(arr[i],arr[j]);


    }
    swapmy(arr[low],arr[j]);
    return j;

}
void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int pind=partitionf(arr,low,high);
        qs(arr,low,pind-1);
        qs(arr,pind+1,high);

    }
}
vector<int> quicksort(vector<int> &arr){
    qs(arr,0,arr.size()-1);
    return arr;
}

int main(){
    vector<int> arr={13,46,24,52,20,9};
    vector<int> arr2={9,13,20,24,46,52};
    //selsort(arr);
    //bubsort(arr);
    //inssort(arr);
    //mergesort(arr,arr.size());
    quicksort(arr);
    for(int val :arr){
        cout<<val<<" ";
    }
}
