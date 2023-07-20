class Solution {


public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix[0].size();//col no.
        int m =matrix.size();//row no.
        int i =0;
        int j = n-1;

        while(i<m && j>=0){
            int curr = matrix[i][j];
            if(curr== target)return true;
            else if(curr < target) i++;
            else j--;
        }
  return false;
    }

};
