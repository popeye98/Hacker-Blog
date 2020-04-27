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
	    int k;
	    cin>>k;
	    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
	    int sum=0,res=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	    sum+=arr[i];

	    if(sum>=k)
	    res=min(res,i+1);

	    while(pq.size() && sum-pq.top().first >=k)
	    {
	    res=min(res,i-pq.top().second);
	    pq.pop();

	    }
	    pq.push({sum,i});
	    }

	    if(res==INT_MAX)
	    cout<<-1;
	    else
	    cout<<res;
	    cout<<endl;

	}
