#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];

    int mn=INT_MAX,mnpos=0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]<mn)//first min value
        {
            mnpos=i;
            mn=arr[i];
        }
    }
    cout<<mn<<" "<<mnpos+1;
}