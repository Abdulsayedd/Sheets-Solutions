#include <bits/stdc++.h>

using namespace std;

int main (){

    int n;
    cin>>n;
    int even=0,odd=0,positive=0,negative=0;
    for(int i = 0 ; i < n ; i++)
    {
        int h;
        cin>>h;
        if(h%2==0)
        {
            even++;
        }
        if(h%2!=0)
        {
            odd++;
        }
        if(h>0)
        {
            positive++;
        }
        if(h<0)
        {
            negative++;
        }
    }
    cout<<"Even: "<<even<<"\n";
    cout<<"Odd: "<<odd<<"\n";
    cout<<"Positive: "<<positive<<"\n";
    cout<<"Negative: "<<negative<<"\n";

}