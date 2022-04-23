#include <bits/stdc++.h>
using namespace std ;
int main (){

int l=0,r=-1,coun=0;
string s ,m;
cin>>s>>m;
string ansl,ansr;
coun=m.size();
bool t = false;
for(int i = 0 ; i<s.size();i++)
{
    if (s.size()==1)
    {
        break;
    }
    if (s[i]=='|')
    {
        t=true;

    }
    if (t==false)
    {
        l++;
        ansl+=s[i];
    }
    else if (t==true)
    {
        r++;
        ansr+=s[i];
    }

}
 ansr.erase(remove( ansr.begin(),  ansr.end(), '|'),  ansr.end());


        if (abs(l-r)>coun)
        {
        cout<<"Impossible";
        }
        else
        {
            for(int i=0 ;i<m.size();i++)
            {
                if(ansr.size()>ansl.size())
                {
                    ansl+=m[i];
                }
                else
                {
                    ansr+=m[i];
                }
            }
            if (ansr.size()==ansl.size())
            cout<<ansl<<'|'<<ansr;
            else
            {
                cout<<"Impossible";
            }

        }


}




