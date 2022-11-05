#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int freq[100001]={};
    int c=0,mx=0;
    for(int i = 0 ; i < n*2 ; i++)
    {
        int h;cin>>h;
        freq[h]++;
        if(freq[h]==2)
        {
            c--;
            freq[h]=0;
        }
        else
        {
            c++;
        }
        if(c>mx)
        {
            mx=c;
        }
    }
    cout<<mx;
}