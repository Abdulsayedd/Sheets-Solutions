#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        while(n>0)
        {
            cout<<n%2;
            n/=2;
        }
        cout<<endl;
    }



}