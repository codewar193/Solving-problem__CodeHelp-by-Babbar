#include <iostream>
using namespace std;


bool solve(vector<int>arr, int n, int k,int mid) {
  int sum = 0 ;
  for(int i = 0; i <= n ;i++)
  {
    if(a[i] > mid) 
    {
      sum+= (a[i] - mid) ;
    }
  }
  if(sum>=k) return true;
  
   return false;
}



}
int main() {
	
	// your code here
vector<int> arr{20,15,10,17};
  int k = 7;
  int lb =0;
  int n = arr.size()-1;
  sort(arr.begin(),arr.end());
  ub=arr[n];
  int mid =  mid = lb + (ub - b) / 2;
  
 while(lb <= ub) {
     if(solve( arr, n, k, mid )) 
     {
       ans = mid ;
      1b = mid + 1 ;

     }else{
     ub= mid -1;
     }
 }

cout<<ans;
return 0;
}
