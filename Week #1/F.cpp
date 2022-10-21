#include <bits/stdc++.h>

using namespace std;

int main (){
    int days;
    cin>>days;
    cout<<days/365<<" years"<<"\n";
    days=days%365;
    cout<<days/30<<" months"<<"\n";
    days=days%30;
    cout<<days<<" days";
}