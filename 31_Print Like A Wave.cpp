#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    //TC: O(m X n)
    vector<int> ans;

    for(int col =0 ;col<mCols;col++)
    {
        // bottom to top
        if(col&1)
        {
            for(int row = nRows-1;row>=0;row--)
            {
                ans.push_back(arr[row][col]);
            }
        }else{ //top to bottom
           for(int row = 0;row<nRows;row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
