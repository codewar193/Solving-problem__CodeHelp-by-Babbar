class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
    int size = arr.size();
    unordered_map <int,int> nums;
    unordered_set <int> occurrences;


    for(int i =0;i<size;i++)
    {
        nums[arr[i]]++;
    }

    for(auto it: nums)
    {
        if(occurrences.find(it.second) != occurrences.end())
        {
            return false;
        }
        occurrences.insert(it.second);
    }
    return true;
    }
};
