#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int>&nums,int val)
{
	 int c=0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
                c++;
        }
        
        remove(nums.begin(),nums.end(),val);
        return (nums.size()-c);
    
}

int main()
{
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	int j=removeElement(nums,3);
	
	for (auto it = nums.begin(); it != nums.end(); it++) 
        cout << *it << " "; 


}