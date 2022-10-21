#include <bits/stdc++.h>

using namespace std;

int main (){
    long long a,b,c,d,mn;
    char ch;
    cin>>a>>b>>c>>d;
    if(a<=b && a<=c && a<=d)
    {
        mn=a;
        ch='A';
    }
    else if(b<=a && b<=c && b<=d)
    {
        mn=b;
        ch='B';
    }
    else if(c<=b && c<=a && c<=d)
    {
        mn=c;
        ch='C';
    }
    else if(d<=b && d<=c && d<=a)
    {
        mn=d;
        ch='D';
    }
    int cnt=0;
    if(mn==a)
    {
        cnt++;
    }
    if(mn==b)
    {
        cnt++;
    }
    if(mn==c)
    {
        cnt++;
    }
    if(mn==d)
    {
        cnt++;
    }
    if(cnt>1)
    {
        cout<<"Equal";
    }
    else
    {
        cout<<ch;
    }
}