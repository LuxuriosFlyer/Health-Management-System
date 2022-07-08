
// bool ifPossible(vector<int> arr,int n,int m,int mid)
//     {
//         int student=1; int pageSum=0;
//         for(int i=0;i<n;i++)
//         {
//             if(pageSum+arr[i]<=mid)
//             {
//                 pageSum+=arr[i];
//             }
//             else
//             {
//                 student++;
//                 if(arr[i]>mid || student>m)
//                 {
//                     return false;
//                 }
//                 else
//                     pageSum=arr[i];
//             }
//         }
//         return true;
//     }

// int allocateBooks(vector<int> arr, int n, int m) {
//     int s=0,e=0,ans=-1;
//     for(auto n:arr)
//     {
//         e+=n;
//     }
//     int mid=s+(e-s)/2;
//     while(s<=e)
//     {
//         if(ifPossible(arr,n,m,mid))
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else
//             s=mid+1;
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }