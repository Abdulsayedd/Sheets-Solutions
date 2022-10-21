#include <bits/stdc++.h>

using namespace std;

int main (){
    int x;
    double y;
    cin>>x>>y;
    double ans;
    if(x==1)
    {
        ans=4.00 * y;
    }
    else if(x==2)
    {
        ans=4.50 * y;
    }
    else if(x==3)
    {
        ans=5.00 * y;
    }
    else if(x==4)
    {
        ans=2.00 * y;
    }
    else if(x==5)
    {
        ans=1.50 * y;
    }
    cout<<fixed<<setprecision(2)<<"Total: R "<<ans;





    }