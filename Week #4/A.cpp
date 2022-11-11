#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int c=0;
    string x;
    while(n--)
    {
        cin>>x;
        if(x[1]=='+')
            c++;
        else c--;
    }
    cout<<c;

}