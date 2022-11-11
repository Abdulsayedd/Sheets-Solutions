#include <bits/stdc++.h>
using namespace std;
int main (){

    string x;cin>>x;
    int c;
    for(int i = 0 ; i < x.size() ; i++)
    {
        c=1;
        for(int j = i+1 ; j<x.size() ; j++)
        {
            if(x[i]==x[j])
                c++;
            if(c==7)
            {
                cout<<"YES";
                return 0;
            }
            if(x[i]!=x[j])
                break;
        }
    }
    cout<<"NO";
}