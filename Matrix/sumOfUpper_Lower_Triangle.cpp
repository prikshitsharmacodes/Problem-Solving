class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
        // code here
        int lower_Sum=0;
        int n =mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                lower_Sum += mat[i][j];
            }
            
        }
        int upper_Sum=0;
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=i;j--){
                upper_Sum+=mat[i][j];
            }
        }
        vector<int>ans;
        ans.push_back(upper_Sum);
        ans.push_back(lower_Sum);
        return ans;
    }
};
