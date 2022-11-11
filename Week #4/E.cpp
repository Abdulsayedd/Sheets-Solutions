#include <bits/stdc++.h>
using namespace std;
int main (){

    int n;
    cin>>n;
    string x;
    cin>>x;
    int d=0,a=0;
    for(int i = 0 ; i < x.size() ; i++)
    {
        if(x[i]=='A')a++;
        else d++;
    }
    if(a==d)
    {
        cout<<"Friendship";
    }
    else if(a>d)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Danik";
    }
}