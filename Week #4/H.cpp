#include <bits/stdc++.h>
using namespace std;
int main (){

int n,q;cin>>n>>q;
string x;cin>>x;
int arr1[n];
int arr2[n+1];
arr2[0]=0;
for(int i = 0 ; i < x.size() ; i++)
{
    arr1[i]=x[i]-'a'+1;
}
for(int i = 0 ; i < x.size() ; i++)
{
    arr2[i+1]=arr1[i]+arr2[i];
}
while(q--)
{
    int l,r;
    cin>>l>>r;
    cout<<arr2[r]-arr2[l-1]<<"\n";
}
}