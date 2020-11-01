class Solution {
public:

    
    void rotate(vector<vector<int>>& matrix) {
        
        int n=matrix.size();         
        //transpose the matrix
        for(int i = 0; i<n; i++){
     		// j start from i, because we already tranposed previous row, col
            for(int j = i; j<n; j++){
                //swap row column
                swap(matrix[i][j], matrix[j][i]);
                
            }
        }
        
        //reverse each row
        for(int i = 0; i<n; i++){
            for(int j = 0, l = n-1; j<n/2; j++,l--){
                //reverse row
                swap(matrix[i][j], matrix[i][l]);                
            }
        }
    }
};