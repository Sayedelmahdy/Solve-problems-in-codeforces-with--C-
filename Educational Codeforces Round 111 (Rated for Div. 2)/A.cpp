#include <bits/stdc++.h>
using namespace std ;
int main (){


int x ;
cin>>x;
for(int i=0 ;i<x ; i++)
{
    int n,a,b,ans=0;
    cin>>n>>a>>b;
    string s; cin>>s;
    if(b<0)
    {
        int var=0; char e=s[0],m=s[0];
        for(auto it:s)
        {
            if(it!=e&&it!=m) {var++; }  e=it;
        }
        var+=1;
        ans=n*a+var*b;
    }
    else
    {
        ans=n*a+n*b;
    }
    cout<<ans<<endl;
}
}
