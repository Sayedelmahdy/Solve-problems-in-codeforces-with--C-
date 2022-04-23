#include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) emplace_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define endl "\n"
        #define soso ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
    using namespace std ;
ll findRangeXOR(ll n)
{
    ll mod = n % 4;
    if (mod == 0)
    return n;
    else if (mod == 1)
        return 1;
    else if (mod == 2)
        return n + 1;

    else if (mod == 3)
        return 0;
}
ll findRangeXOR(ll l, ll r)
{
    if(l==0 ) return findRangeXOR(r);
    return (findRangeXOR(l - 1) ^ findRangeXOR(r));
}
    int main (){
        soso;
       testcase{
       int n;
       cin>>n;
       if(n%4==0)
        cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;


       }
    }
