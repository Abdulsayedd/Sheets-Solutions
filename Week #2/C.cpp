#include <bits/stdc++.h>

using namespace std;

int main (){

    int n;
    cin>>n;
    int mx=-1;
    for(int i = 0 ; i < n ; i++)
    {
        int h;
        cin>>h;
        if(mx<h)
        {
            mx=h;
        }
    }
    cout<<mx;
}