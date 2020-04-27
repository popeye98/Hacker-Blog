  #include <bits/stdc++.h>
using namespace std;

 int next(vector<int>& nums, int i){
        int n = nums.size();
        return (n+nums[i]+i)%n;
    }

    bool func(vector<int>& arr)
    {

        int n=arr.size();
        vector<bool>vis(n,0);

        for(int i=0;i<n;i++)
            arr[i]=arr[i]%n;

        int slow,fast;
        for(int i=0;i<n;i++)
        {
            slow=i,fast=i;

            if(vis[i])
                continue;
            while(arr[slow]*arr[next(arr,i)] >0&& arr[slow]*arr[next(arr,next(arr,fast))]>0)
            {
                slow=next(arr,slow);
                 fast = next(arr,next(arr,fast));
                 if(vis[slow])
                    break;
                    vis[slow]=1;
                 if(slow==fast)
                 {
                     if(slow==next(arr,slow))
                        return 0;
                     return 1;

                 }




            }
        }



        return 0;

    }


        int main() {
	//code


	    int n;
	    cin>>n;
	    vector<int>arr;
	  int s;
	  for(int i=0;i<n;i++)
      {
          cin>>s;
          arr.push_back(s);
      }

      cout<<func(arr)<<endl;







    }
