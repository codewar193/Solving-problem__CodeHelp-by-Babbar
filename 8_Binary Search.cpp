int search(vector<int>& nums, int target) {
    // Write Your Code Here
    int index;
    int i=0,j=nums.size()-1;
   

   while(i<=j){
       int mid = (i+j)/2;

       if(nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            j=mid-1;
        }
        else{
            i=mid+1;
        }

    
   }
        return -1;
}
