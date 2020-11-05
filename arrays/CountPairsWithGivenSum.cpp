#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
        // code here
        set<int> s;
       int c=0;
        for(auto i=0;i<n;i++)
        {
             if(s.find(a[i])!=s.end())
            {
                c++;    
            }
            int m=k-a[i];
            if(a[i]<k)
            {
                s.insert(m);

            }
           
            
            
        }
        
     return c;   
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends