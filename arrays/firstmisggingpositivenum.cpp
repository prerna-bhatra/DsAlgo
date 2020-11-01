#include<bits/stdc++.h>
using namespace std;


    int firstMissingPositive(vector<int>& nums) {
     int sz=nums.size();
      sort(nums.begin(), nums.end()); 
        int s=nums[0];
        int i=0;
        while(i<sz)
        {
            if(s==nums[i] )
            {
              cout<<"found negative and posiditive="<<s<<" ";
              cout<<"index"<<i<<" ";
               s++; 
                i++;
                
            }
            else if(s!=nums[i] && s<=0)
            {
                cout<<"\n not found negative ="<<s<<" ";
                 cout<<"index"<<i<<" ";
                s++; 
                
              
            }
            else 
            {
               break;
            }
            
        }
       return s; 
        
    }


int main()
{
  vector<int> nums;
  nums.push_back(3);
  nums.push_back(4);
  nums.push_back(-1);
  nums.push_back(1);

cout<<firstMissingPositive(nums);
}



/*

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     int sz=nums.size();
      sort(nums.begin(), nums.end()); 
        int s=nums[0];
        int i=0;
        while(i<sz)
        {
            if(s==nums[i] )
            {
               s++; 
                i++;
            }
            else if(s!=nums[i] && s<=0)
            {
                s++; 
                
            }
            else 
            {
               break;
            }
            
        }
       return s; 
        
    }
};

*/



