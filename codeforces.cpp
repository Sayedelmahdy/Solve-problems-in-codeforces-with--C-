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
                  testcase
                  {
                    string str ;
                    cin>>str;
                    int pos=-1;
                    bool f = false;
                    for(int i=0;i<str.size();i++)
                    {
                        if (str[i]=='a')
                        {
                            pos=i;
                            break;
                        }

                    }
                    if (pos==-1)
                    {
                        cout<<"NO"<<endl;
                        continue;
                    }
                    else
                    {
                        char fin = 'b';
                        int l=pos-1,r=pos+1;
                        while(l>=0||r<=str.size()-1)
                        {
                            if( str[l]==fin)
                            {
                                l--;
                                fin++;
                            }
                            else if (str[r]==fin)
                            {
                                r++;
                                fin++;
                            }
                            else
                            {
                                f=true;
                                break;
                            }


                        }
                        if (f)
                        {
                            cout<<"NO"<<endl;
                        }
                        else
                        {
                            cout<<"YES"<<endl;
                        }


                    }
                  }
                }

