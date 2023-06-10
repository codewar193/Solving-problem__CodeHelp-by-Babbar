int floorSqrt(int n)

{

// Write your code here.
int s=0;
int e=n/2;
long long int mid=s+(e-s)/2;
long long int ans=0;
while(s<=e){

long long int squre=mid*mid;
if(squre==n){
return mid;
}

else if(squre<n){
ans=mid;
s=mid+1;
}

else{

e=mid-1;
}

mid=s+(e-s)/2;
}

return ans;

}

 

