


bool isPossibleSol(vector<int> arr,int n,int mid, int m)
{
     int studentCount =1;
     int sum =0;
     int i ;
     aa
    for(i=0;i<n;i++)
     {
         if(sum+arr[i] <= mid)
         {
             sum+=arr[i];
         }

         else
         {
             studentCount++;

              if(studentCount>m || arr[i]>mid )return false;

              sum=arr[i];
         }

     }
     return true;
}

int findPages(vector<int>& arr, int n, int m) {

    // Write your code here.
    if (m > n) {
      return -1; // edge cases where students > books
    }


    int s =0;
    int sum =0;
    int ans=-1 ;

    for(int i =0;i<n;i++)
    {
        sum += arr[i];
    }
    int e =sum;
    int mid = s + (e-s)/2;


    while(e>=s)
    {
            if(isPossibleSol(arr,n,mid,m))
            {
                ans = mid;
                e= mid-1;
                
            }
            else{
                s = mid+ 1;
            }
            mid = s + (e-s)/2;
    }

    return ans;
}
