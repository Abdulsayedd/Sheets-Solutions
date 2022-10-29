#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int tc=0;
    cin>>tc;
    while(tc--)
    {
        long long n;
        cin>>n;
        long long temp=n/10;
        long long t=1;
        while(temp>0)
        {
            t*=10;
            temp/=10;
        }
        while(t>0)
        {
            cout<<n/t<<" ";
            n=n%t;
            t/=10;
        }
        cout<<endl;
    }

}