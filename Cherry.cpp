#include <bits/stdc++.h>
using namespace std ;
int main (){

int t ;
cin>>t;
while (t--)
{
    long long n;
    cin>>n;
    long long arr[n];
    vector<long long > x;
    for (int i =0 ; i<n;i++)
    {
        cin>>arr[i];
    }
    long long ans=0;
    for(int i=1 ;i<n;i++)
    {
        ans=max(ans,arr[i-1]*arr[i]);
        x.push_back(ans);

    }
    cout<<max_element(x.begin(),x.end())<<endl;
}







}
