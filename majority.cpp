#include <bits/stdc++.h>
using namespace std;

 vector<int> majorityElement(vector<int>& nums) {
        if (nums.empty()) {
            return {};
        }

        int N = nums.size();

        int candidate1, candidate2;
        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            // nums[i] could belong to the counts of candidate1, candidate2 or neither
            if (nums[i] != candidate2 && (count1 == 0 || nums[i] == candidate1)) {
                candidate1 = nums[i];
                count1++;
            } else if (count2 == 0 || nums[i] == candidate2) {
                candidate2 = nums[i];
                count2++;
            } else {
                // belongs in neither, subtract count from both possible candidates
                count1--;
                count2--;
            }
        }

        if (candidate1 == candidate2) {
            return {candidate1};
        }

        // now need to verify if they are both majorities

        vector<int> res;


        int total1 = 0;
        int total2 = 0;
        for (int i = 0; i < N; i++) {
            if (nums[i] == candidate1) {
                total1++;
                if (total1 != -1 && total1 > N/3) {
                    res.push_back(candidate1);
                    total1 = -1;
                }
            }
            if (nums[i] == candidate2) {
                total2++;
                if (total2 != -1 && total2 > N/3) {
                    res.push_back(candidate2);
                    total2 = -1;
                }
            }
        }

        return res;
    }
int main(){
    int n;
	    cin>>n;
	    vector<int>arr;
	  int s;
	  for(int i=0;i<n;i++)
      {
          cin>>s;
          arr.push_back(s);
      }

    arr=majorityElement(arr);
    for(auto it:arr)
    cout<<it<<" ";
    cout<<endl;
    }
