#include <bits/stdc++.h>

using namespace std;

int main (){

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1 || n==0)cout<<"Not";
        else
        {
            bool prime=true;
            for(int i =2 ; i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    prime=false;
                    break;
                }
            }
            if(prime==true)
            {
                cout<<"Prime";
            }
            else
            {
                cout<<"Not";
            }
            cout<<"\n";
        }
    }
}