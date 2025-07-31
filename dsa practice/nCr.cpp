#include <bits/stdc++.h>
using namespace std;
int findnCr(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;

};
vector<int> genpascalrow(int n) {
    long long ans = 1;
    vector<int> ansrow;
    ansrow.push_back(1);  // First element is always 1

    for (int i = 1; i <= n; i++) {
        ans = ans * (n - i + 1) / i;
        ansrow.push_back((int)ans);  // Cast to int for output
    }

    return ansrow;
}

vector<vector<int>> gentriangle(int N) {
    vector<vector<int>> temp;
    for (int i = 0; i < N; i++) {
        temp.push_back(genpascalrow(i));
    }
    return temp;
}

int main() {
    int n = 7, r = 2;
    vector<vector<int>> sample = gentriangle(n);

    for (int i = 0; i < sample.size(); i++) {
        for (int j = 0; j < sample[i].size(); j++) {
            cout << sample[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}