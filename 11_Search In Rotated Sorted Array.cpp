
int binary_search(vector<int>& arr , int s , int e, int key){

    int start =s;
    int end=e;
    int mid= start + (end-start)/2;

    while(start <= end){
       
       if(arr[mid] == key){
           return mid;
     }

        if(arr[mid]<key){

            start = mid+1;

        }else{

            end = mid-1;
        }
           mid = start + (end-start)/2;

    }  
  return -1;

}

int getpivot(vector<int>& arr, int Size){

    int start = 0;
    int end=Size-1;
    int mid= start + (end-start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
          start = mid+1;
        }else{
          end = mid;
        }
       mid = start + (end-start)/2;
     }  
     return start;
}



int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.

    int pivot = getpivot(arr,n);

    if(arr[pivot] <= k && k <= arr[n-1] ){
          return binary_search(arr,pivot,n-1,k);
    }else{
          return binary_search(arr,0,pivot-1,k);
    }

}
