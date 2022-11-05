#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int arr[n];
    int num;
    cin>>num;
    int i=0;
    while(num)//put digits in array
    {
        arr[i++]=num%10;
        num/=10;
    }
    sort(arr,arr+n);
    long long sum=0,pow =1;
    for(int i = 0 ; i < n ; i++)//make sorted digits number
    {
        sum+=(pow*arr[i]);
        pow*=10;
    }
    cout<<sum*2;
}