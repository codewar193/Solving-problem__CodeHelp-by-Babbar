#include <set>
#include <unordered_set>
#include <vector>
#include <algorithm>


vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>> st;

    for(int i = 0; i < n; i++)
    {
        unordered_set<int> hashset;
        for(int j = i + 1; j < n; j++)
        { 
            int k = -(arr[i] + arr[j]);
            if(hashset.count(k) > 0)
            {
                vector<int> temp = {arr[i], arr[j], k};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
  
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
