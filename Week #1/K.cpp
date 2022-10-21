#include <bits/stdc++.h>

using namespace std;

int main (){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=b && a<=c)
    {
        if(b<=c)
        {
            cout<<a<<"\n";
            cout<<b<<"\n";
            cout<<c<<"\n";
            cout<<"\n";
            cout<<a<<"\n";
            cout<<b<<"\n";
            cout<<c<<"\n";
        }
        else
        {
            cout<<a<<"\n";
            cout<<c<<"\n";
            cout<<b<<"\n";
            cout<<"\n";
            cout<<a<<"\n";
            cout<<b<<"\n";
            cout<<c<<"\n";
        }
    }
    else if(b<=a && b<=c)
    {
        if(a<=c)
        {
            cout<<b<<"\n";
            cout<<a<<"\n";
            cout<<c<<"\n";
            cout<<"\n";
            cout<<a<<"\n";
            cout<<b<<"\n";
            cout<<c<<"\n";
        }
        else
        {
            cout<<b<<"\n";
            cout<<c<<"\n";
            cout<<a<<"\n";
            cout<<"\n";
            cout<<a<<"\n";
            cout<<b<<"\n";
            cout<<c<<"\n";
        }
    }
    else if(c<=b && c<=a)
    {
        if(b<=a)
        {
            cout<<c<<"\n";
            cout<<b<<"\n";
            cout<<a<<"\n";
            cout<<"\n";
            cout<<a<<"\n";
            cout<<b<<"\n";
            cout<<c<<"\n";
        }
        else
        {
            cout<<c<<"\n";
            cout<<a<<"\n";
            cout<<b<<"\n";
            cout<<"\n";
            cout<<a<<"\n";
            cout<<b<<"\n";
            cout<<c<<"\n";
        }
    }
}