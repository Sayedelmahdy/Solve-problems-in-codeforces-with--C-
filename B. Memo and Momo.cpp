#include <bits/stdc++.h>
using namespace std ;
int main ()
        {
             int t;
            cin>>t;
            while(t--)
            {
                int n,k,cnt=1;
                cin>>n>>k;
                int arr[n];
                for ( int i = 0 ; i < n ; i++)
                {
                    cin>>arr[i];
                }
                sort(arr,arr+n);
                for ( int i = 1 ; i < n ; i ++)
                {
                    if ((arr[i]-arr[i-1])!=1)
                    {
                        cnt++;
                    }
                }
                if (cnt>k)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }

            }
        }
