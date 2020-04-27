  #include <bits/stdc++.h>
using namespace std;

  int maxArea(vector<int>& arr) {

        int n=arr.size();
        int i=0,j=n-1;
        int max_=0;
        while(j>=i)
        {
            max_=max(max_,(j-i)*min(arr[i],arr[j]));

            if(arr[i]>arr[j])
                j--;
            else if(arr[i]<=arr[j])
                i++;


        }
        return max_;
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

      cout<<maxArea(arr)<<endl;







    }
