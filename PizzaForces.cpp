#include <bits/stdc++.h>
using namespace std ;
int main (){


int n ;
cin>>n;
while (n--)
{
    long long x , minutes ;
    cin>>x;
   if (x<=6)
   {
       minutes=15;
   }
   else{
    if (x%2!=0)
    {
        x++;
    }
    minutes=x*20;
    minutes/=8;
   }
   cout<<minutes<<endl;
}


}
