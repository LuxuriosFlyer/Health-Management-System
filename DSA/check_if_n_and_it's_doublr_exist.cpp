// bool checkIfExist(vector<int>& arr) {
//         sort(arr.begin(),arr.end());
//         for(int i=0;i<arr.size();i++)
//         {
//             int s=i+1;int e=arr.size()-1; int mid=s+(e-s)/2;
//             int key=arr[i]*2;
//             if(key>=0)
//             {
//             while(s<=e)
//             {
//                 if(arr[mid]==key)
//                 {
//                     return true;
//                 }
//                 else if(arr[mid]>key)
//                 {
//                     e=mid-1;
//                 }
//                 else
//                     s=mid+1;
//                 mid=s+(e-s)/2;
//             }
//             }
//             else
//             {
//                 s=0;e=i;mid=s+(e-s)/2;
//             while(s<=e)
//             {
//                 if(arr[mid]==key)
//                 {
//                     return true;
//                 }
//                 else if(arr[mid]>key)
//                 {
//                     e=mid-1;
//                 }
//                 else
//                     s=mid+1;
//                 mid=s+(e-s)/2;
//             }
//             }
//         }
//         return false;