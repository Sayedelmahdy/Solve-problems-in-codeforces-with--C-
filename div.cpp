#include <bits/stdc++.h>
#define hanaka ios_base::sync_with_stdio(false) , cin.tie(0);
using namespace std ;

int main (){
hanaka
int x ;
cin>>x;
for(int i=0 ;i<x;i++)
{
   int x,y,a,b,j,k,ans,fx=0,s , coun=0,coun2=0;
   cin>>x>>y>>a>>b>>j>>k;
s=a-j;
if (y==b && y==k && b==k && a==s )
{
    fx=1;
    ans=x+a;
    cout<<ans<<endl;
}
else {
   while ( y!=b)
   {
       if (y<b)
       {
           if(y==k)
           {

              x++;
              y++;
              coun+=2;

           }
           else
           {
           y++;
           coun++;
           }
       }
       else if (y>b)
       {
           if(y==k)
           {
             y--;
             x++;
              coun+=2;

           }
           else
           {
           y-=1;
           coun++;
           }
       }
   }
   while (x!=a)
   {

        if (x>a)
       {
           if(x==j)
           {
              x--;
              coun+=1;
           }
           else
           {
           x-=1;
           coun++;
           }
       }
       else if (x<a)
       {
           if(x==j)
           {
              x++;
              coun+=1;

           }
           else
           {
           x+=1;
           coun++;
           }
       }

   }
cout<<coun<<endl;
}


}


}
