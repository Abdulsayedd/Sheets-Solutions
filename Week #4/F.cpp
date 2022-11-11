#include <bits/stdc++.h>
using namespace std;
int main (){
    string x;
    cin>>x;
    string s="hello";
    int j=0;
    for(int i = 0 ; i < x.size() ; i++)
    {
        if(s[j]==x[i])
            j++;
    }
    if(j==5)
        cout<<"YES";
    else
        cout<<"NO";

}