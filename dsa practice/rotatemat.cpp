#include<bits/stdc++.h>
using namespace std;
void rotatemat(vector<vector<int>> &mat){
    int n=mat.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            swap(mat[i][j],mat[j][i]);//to avoid double swapping and out of bounds

        }
    }
    for(int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());//reverse the row so mat[i]
    }

};
void printmat(vector<vector<int>> &mat){
    int n=mat.size();
    int j=mat[0].size();
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";

            }
            cout<<"\n";
        }
    };
int main(){
    vector<vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
     printmat(matrix);
    rotatemat(matrix);
   
    printmat(matrix);

}