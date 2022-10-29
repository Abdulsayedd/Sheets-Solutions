#include <bits/stdc++.h>

using namespace std;

int main (){

    int a,b;
    cin>>a>>b;
    int mn,mx;
    if(a<=b)
    {
        mn=a;
        mx=b;
    }
    else
    {
        mn=b;
        mx=a;
    }
    double sum=0;
    for(int i = mn ; i<=mx ; i++)
    {
        sum+=i;
    }
    cout<<round(sum/(mx-mn+1));
}