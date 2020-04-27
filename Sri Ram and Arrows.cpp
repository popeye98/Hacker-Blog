#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main() {
	//code


	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
int f=0;
	    stack<pair<int,int>>r,l;
	    for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            r.push({arr[i],i});
            else{
                f=0;
                while(!r.empty() && r.top().second <i && r.top().first <=abs(arr[i]))
                {
                    pair<int,int>p=r.top();
                    int a=r.top().first;
                    int b=r.top().second;
                    if(a<abs(arr[i]))
                    {
                        r.pop();
                    }
                    else if(a==abs(arr[i]))
                    {
                        r.pop();
                        f=1;
                        break;
                    }


                }
                if(r.empty() && !f)
                l.push({arr[i],i});


            }



        }

        vector<pair<int,int>>v;
        while(!l.empty())
        {
            int a=l.top().second;
            int b=l.top().first;
            v.push_back({a,b});
            l.pop();


        }
          while(!r.empty())
        {
            v.push_back({r.top().second,r.top().first});
            r.pop();

        }
        sort(v.begin(),v.end());
        for(auto it:v)
            cout<<it.second<<" ";





	}

