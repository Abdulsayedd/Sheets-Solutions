#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int arr[n][n];
    int diag1=0,diag2=0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i+j==n-1)
            {
                diag1+=arr[i][j];//rbtm ltop
            }
            if(i==j)
            {
                diag2+=arr[i][j];//rtop lbtm
            }
        }
    }
    cout<<abs(diag1-diag2);//to get the absolute value
}