#include <bits/stdc++.h>
using namespace std ;
int main (){

int n ,up;
cin>>n;
cin>>up ;
int ans = 7-up ;
bool s = false ;
for(int i = 0 ; i<n;i++)
{
    int x1,x2 ;
    cin>>x1>>x2 ;
    if (x1==ans || x2==ans )
    {
        s=true ;

    }
}
if (s==false )
{
    cout<<"YES";

}
else
    cout<<"NO";


}
