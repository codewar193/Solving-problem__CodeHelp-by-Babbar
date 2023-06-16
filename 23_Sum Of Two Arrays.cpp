#include <bits/stdc++.h> 
vector<int> reverse(vector<int>arr)
 {
	int i=0;
	int j= arr.size()-1;

	 while(i<j)
	 {
		 swap(arr[i],arr[j]);
		 i++;
		 j--;
	 }
	 return arr;
 }


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i =n-1;
	int j =m-1;
	int c=0;
	vector<int> ans;
    
	while(i>=0 && j>=0)
	{
		int num1 = a[i];
		int num2 = b[j];
		int sum = num1+num2+c;
		c= sum/10;
		 sum = sum % 10;
		ans.push_back(sum);
		i--;
		j--;


	}

	while(i>=0)
	{      
		int sum = a[i]+c;
		c = sum/10;
		sum= sum%10;
          ans.push_back(sum);
		  i--;
	}
		while(j>=0)
	{      
		int sum = b[j]+c;
		c = sum/10;
		sum= sum%10;
          ans.push_back(sum);
		  j--;
	}
	   while (c != 0) {
        int sum = c;
        c = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

	return reverse(ans);

}
