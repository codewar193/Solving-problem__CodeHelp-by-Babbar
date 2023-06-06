int findDuplicate(vector<int> &arr) 
{
    // Write your code here
     int flag=0,flag1=0;

    for(int i=0;i<arr.size();i++)
       flag +=arr[i];

    for(int i=1;i<arr.size();i++)
     flag1 +=i;   

    return flag-flag1;
	
}
