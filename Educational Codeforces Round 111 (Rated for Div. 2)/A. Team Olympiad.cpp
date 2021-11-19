#include <bits/stdc++.h>
using namespace std ;
int main (){

 int n;
 cin>>n;
 int arr [n];
 int x =0, y=0,z=0 ;
for (int i =0 ; i<n ; i++)
{

    cin>> arr[i];
    if(arr[i]==1)
    {
        x++;
    }
    else if (arr[i]==2)
    {
        y++;
    }

    else if (arr[i]==3)
    {
        z++;
    }
}
if (x==0 || y==0 || z==0)
{
    cout<<0;
}
else
{
    int mn ;
    mn=min(x,y);
    mn=min(mn,z);
    cout<<mn<<endl;
    int arr2[n];
    int q=0,w=0,e=0;
    for(int i=0 ;i<mn;i++)
    {
            int coun=0;
            int f=0,g=0,h=0;
        for(int j=0;j<n;j++)
        {

            if(arr[j]==1 && q<mn && f==0)
            {
               cout<<j+1<< " ";
               q++;
               arr[j]=0;
               f++;
               coun++;
            }
            else if  (arr[j]==2 && w<mn && g==0)
            {
                 cout<<j+1<< " ";
                 w++;
                 arr[j]=0;
              g++;
               coun++;
            }
              else if  (arr[j]==3 && e<mn && h==0)
            {
                 cout<<j+1<< " ";
                 arr[j]=0;
                 e++;
                 h++;
              coun++;
            }


            if (coun==3)
            {
                cout<<"\n";
                break;
            }

        }
    }
}

}
