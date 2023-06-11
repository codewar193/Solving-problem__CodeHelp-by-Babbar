bool isPossible(vector<int> arr,int n, int mid,int k)
  {

      int count=1;
      int sum=0;

      for(int i =0;i<n;i++)
      {
          if(arr[i]+sum <= mid)
          {
              sum+= arr[i];
          }
          else{
              count++;

              if(count>k || arr[i]>mid) return false;

              sum = arr[i];
          }
      }
      return true;
  }

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
   
    int s =0;
    int sum = 0;
    int ans =-1;
    int n =boards.size();

    if(n<k)return -1;
       for(auto i:boards)
       {
           sum+=i;
       }
    int e=sum;
    int mid = s+ (e-s)/2;


     while(e>=s)
     {
         if(isPossible(boards,n,mid,k))
         {
            
             ans = mid;
              e = mid-1;
         }
         else{
             s = mid+1;
         }

          mid = s+ (e-s)/2;
     }
     return ans;
}
