// class Solution{
//     public:
//     long long finAns(int arr[], int n, int i, int j)
//     {
//         if(i>j)
//         return 0;
        
//         int cnt1=arr[i] +min(finAns( arr,  n,  i+2,  j),finAns( arr,  n,  i+1,  j-1));
//         int cnt2=arr[j] +min(finAns( arr,  n,  i,  j-2),finAns( arr,  n,  i+1,  j-1));
        
//         return max(cnt1,cnt2);
//     }
    
    
//     long long maximumAmount(int arr[], int n){
//         // Your code here
//         return finAns(arr,n,0,n-1);
//     }
// };