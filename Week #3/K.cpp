#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,q;
    cin>>n>>q;
    int freq[n+1];// frequency (n+1 because of the zero index)
    for(int i = 0 ; i < n+1 ; i++)//initialize with zero
    {
        freq[i]=0;
    }
    while(q--)
    {
        int x,y;//x is the type(1,2) y is the number.
        cin>>x>>y;
        if(x==1)
        {
            freq[y]++;
        }
        else
        {
            cout<<freq[y]<<"\n";
        }
    }
}