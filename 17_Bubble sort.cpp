#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.

    for(int i =0;i<n-1;i++)//for(int i =1;i<n;i++)
    {
        bool swapped = false;
        for(int j =0;j<n-1-i;j++)//  for(int j =0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            { 
                //worst case TC:O(n*n)
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            //means array is already sorted --TC:O(n)
            break;
        }
    }
}
