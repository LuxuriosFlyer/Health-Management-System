// int equalIndex(vector<int> &arr, int n){	
// 	int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     while(s<=e)
//     {
//         if(arr[mid]==mid)
//         {
//             return mid;
//         }
//         else if (arr[mid]<mid)
//         {
//             s=mid+1;
//         }
//         else if(arr[mid]>mid)
//         {
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }