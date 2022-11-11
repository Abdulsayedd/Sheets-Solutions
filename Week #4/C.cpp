#include <bits/stdc++.h>
using namespace std;
int main (){

    string x;
    cin>>x;
    bool arr[26]={false};
    int c=0;
    for(int i = 0 ; i < x.size() ; i++)
    {
        arr[x[i]-'a']=true;
    }
    for(int i = 0 ; i <= 25 ; i++)
    {
        if(arr[i]>0)
            c++;
    }
    if(c%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}