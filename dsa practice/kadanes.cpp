#include <iostream>
#include <climits>  // for INT_MIN
using namespace std;

// Function to find and return the maximum subarray sum
int printmaxsubarr(int arr[], int n) {
    int anstart(-1),ansend(-1),start(-1);
    long long sum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        if(sum==0){
            start=i;
            
        }
        sum += arr[i];
        if (sum > maxi) {
            maxi = sum;
            anstart=start;
            ansend=i;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    for(int i=anstart;i<=ansend;i++){
        cout<<arr[i]<<" ";
    }
    
    return maxi;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = printmaxsubarr(arr, n);
    cout << "Maximum subarray sum is " << max_sum << endl;

    return 0;
}
