#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> permute(vector<int>& nums) {
	sort(nums.begin(), nums.end());
    vector<vector<int>> result = {nums};
        
    while( next_permutation(nums.begin(), nums.end()) ) {
        result.push_back(nums);
    }
        
    return result;
}

int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	vector<vector<int>> vec=permute(v);
	// Displaying the 2D vector 
    for (int i = 0; i < vec.size(); i++) { 
        for (int j = 0; j < vec[i].size(); j++) 
            cout << vec[i][j] << " "; 
        cout << endl; 
    } 



}








