#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> ans;
   int n= arr.size();

   for(int i =0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
          vector<int> temp;
         if(arr[i]+arr[j]==s)
         {
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            ans.push_back(temp);

         }
      }
   }
   sort(ans.begin(),ans.end());
   return ans;



}
