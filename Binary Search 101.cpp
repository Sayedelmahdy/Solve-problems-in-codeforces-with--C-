#include <bits/stdc++.h>
using namespace std ;
int main (){


unsigned long long a,b,k,div,coun=1;
cin>>a>>b>>k;

do {
div=(a+b)*.5;
if ( div< k  )
{
    a=div+1;
   div=(a+b)*.5;
    coun++;

}
else if (div>k)
{
    b=div-1;
    div=(a+b)*.5;
    coun++;
}
else
{
    break;
}

}while (div!=k);
cout<<coun;
}
