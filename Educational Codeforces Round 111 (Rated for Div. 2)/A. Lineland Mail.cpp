#include <bits/stdc++.h>
using namespace std ;
int main (){

long long n ;
cin>>n;
long long arr[n];
for(long long i=0;i<n ;i++)
{
    cin>>arr[i];
}
for (long long i =0 ;i<n ; i++)
{
    if(i==0)
    {
        cout<<abs(arr[i]-arr[i+1])<<" " ;
    }
    else if (i==n-1)
    {
         cout<<abs(arr[i]-arr[i-1])<<" " ;
    }
    else
    {

        if(abs(arr[i]-arr[i-1])<abs(arr[i]-arr[i+1]))
        {
            cout<<abs(arr[i]-arr[i-1])<<" " ;
        }
        else
        {
             cout<<abs(arr[i]-arr[i+1])<<" " ;
        }
    }
    if (abs(arr[i]-arr[n-1])>abs(arr[i]-arr[0]))
    {
        cout<<abs(arr[i]-arr[n-1])<<endl;
    }
    else
    {
         cout<<abs(arr[i]-arr[0])<<endl;
    }
}
}
