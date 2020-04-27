#include <bits/stdc++.h>
using namespace std;
#define d  double
#define ll long long
//#define double float
int main()
{
    ll l;
    cin>>l;
    d a;
    d res=0;
    vector<d>v;
    ll i=0;
    ll k=0;
    ll p=0;
    while(1)
    {
     cin>>a;
     i++;
        if(a==-1)
            break;
        else{
                if(i<=l ){
            v.push_back(a);

            p=p+a;
            res=(d)p/i;
            cout<<res<<" ";
                }
                else{

                    v.push_back(a);

                    p=p-v[k++];
                    p=p+a;
                    res=(d)p/l;
                    cout<<res<<" ";

                }
        }



    }  if(i==1)
        cout<<0<<" ";

}
