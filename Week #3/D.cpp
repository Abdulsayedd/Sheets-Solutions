#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];

    int mx=INT_MIN,mn=INT_MAX,mxpos=0,mnpos=0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]<mn)// get min value and position
        {
            mn=arr[i];
            mnpos=i;
        }
        if(arr[i]>mx)// get max value and position
        {
            mx=arr[i];
            mxpos=i;
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(i==mxpos)//print min value in the max position
        {
            cout<<mn<<" ";
        }
        else if(i==mnpos)//print max value in the min position
        {
            cout<<mx<<" ";
        }
        else
        {
            cout<<arr[i]<<" ";
        }
    }
}