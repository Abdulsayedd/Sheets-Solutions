#include <bits/stdc++.h>
using namespace std;
int main (){

    string x;
    cin>>x;
    int cap=0,sm=0;
    for(int i = 0 ; i < x.size() ; i++)
    {
        if(isupper(x[i]))
        {
            cap++;
        }
        else
        {
            sm++;
        }
    }
    if(cap>sm)
    {
        for(int i = 0 ; i < x.size() ; i++)
        {
            if(islower(x[i]))
            {
                x[i]-='a';
                x[i]+='A';
            }
        }
    }
    else
    {
        for(int i = 0 ; i < x.size() ; i++)
        {
            if(isupper(x[i]))
            {
                x[i]-='A';
                x[i]+='a';
            }
        }
    }
    cout<<x;
}