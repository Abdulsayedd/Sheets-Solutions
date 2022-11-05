#include <bits/stdc++.h>
using namespace std;
int main (){
    long long money;
    cin>>money;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];

    sort(arr,arr+n);

    int c=0;
    for(int i = 0 ; i < n ; i++)
    {
        if(money>=arr[i])
        {
            c++;
            money-=arr[i];
        }
        else
        {
            break;
        }
    }
    cout<<c;
}