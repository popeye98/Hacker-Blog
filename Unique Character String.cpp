#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int>u;
 void fun(vector<string> &arr,int &ans,int idx,string &temp,int n)
 {
     int n1=temp.length();
     ans=max(ans,n1);

     for(int i=idx;i<n;i++)
     {int j=0;
         for(j=0;j<arr[i].length();j++)
         {
             if(u[arr[i][j]])
                break;


         }
         if(j==arr[i].length())
         {
             for(int k=0;k<arr[i].length();k++)
         {
             u[arr[i][k]]++;
         }


         string p=temp+arr[i];
         fun(arr,ans,i+1,p,n);



          for(int k=0;k<arr[i].length();k++)
                    u[arr[i][k]]--;
         }

     }

 }

int main() {
	//code
u.clear();

	    int n;
	    cin>>n;
	  vector<string>arr;
	  string s;
	  for(int i=0;i<n;i++)
      {
          cin>>s;
          arr.push_back(s);
      }
      for(int i=0;i<n;i++)
      {unordered_map<char,int>um;
      int j=0;

      for(j=0;j<arr[i].length();j++)
      {

          if(um[arr[i][j]]>0)
            break;
          um[arr[i][j]]++;
      }
      if(j!=arr[i].length())
       arr[i]="";
      }

string temp="";
int ans=0;

fun(arr,ans,0,temp,n);
//cout<<temp.length()<<endl;

cout<<ans<<endl;
}

