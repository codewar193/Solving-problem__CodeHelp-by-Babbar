#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.

	//way -1:
	// reverse(arr.begin()+m+1,arr.end());

    //way -2:
	int e = arr.size()-1;
	int s = m+1;

	while(s<=e)
	{
		swap(arr[s],arr[e]);
		s++;
		e--;
	}

}
