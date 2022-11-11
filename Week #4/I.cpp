#include <bits/stdc++.h>
using namespace std;
int main (){
        string x;
        cin>>x;
        string y="";
        for(int i = 0 ; i < x.size() ; i++)
        {
            if(x[i]!='+')
                y+=x[i];
        }
        sort(y.begin(),y.end());
        for(int i = 0 ; i < y.size() ; i++)
        {
            if(i==y.size()-1)
                cout<<y[i];
            else
                cout<<y[i]<<'+';
        }
}