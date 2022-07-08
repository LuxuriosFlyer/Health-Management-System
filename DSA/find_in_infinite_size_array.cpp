// int s=0; int e=1;
//         int val= arr[s]
//             while(val<target)
//             {
//                 s=e;
//                 e=e*2;
//                 val=arr[e];
//             }
//             if(target>=arr[s] && target<=arr[e])
//             {
//                 mid=s+(e-s)/2;
//                 while(s<=e)
//                 {
//                     if(arr[mid]==target)
//                         return arr[mid];
//                     else if(arr[mid]<target)
//                         s=mid+1;
//                     else 
//                         e=mid-1;
//                     mid=s+(e-s)/2;
//                 }
//             }
//         return -1;