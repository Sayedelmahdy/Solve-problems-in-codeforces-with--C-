 #include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) emplace_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define soso ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
    using namespace std ;

    int main (){
        soso;
        int n , q ;
        cin>>n>>q;
        int arr[n];
        for(int i=0 ; i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        vector<int >v;
        for(int i=0 ; i<n;i++)
        {
            if (arr[i]!=arr[i-1])
                v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        while(q--)
        {
            int x;
            cin>>x;
            int l , r ;
            if (binary_search(v.begin(),v.end(),x))
            {
                int index = lower_bound(v.begin(),v.end(),x)-v.begin();
                l=index;
                r=v.size()-index-1;
            }
            else
            {
                 int index = upper_bound(v.begin(),v.end(),x)-v.begin();
                l=index;
                r=v.size()-index;
            }
            cout<<l<<" "<<r<<endl;
        }
    }
