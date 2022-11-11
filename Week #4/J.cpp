#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string x;
        cin>>x;
        bool f=false;
        for(int i = 0 ; i <= 4 ; i++)
        {
            string h1,h2;
            h1=x.substr(0,i);
            h2=x.substr(n-4+i,4-i);
            if(h1+h2=="2020")
            {
                f=true;
                break;
            }
        }
        if(f)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}