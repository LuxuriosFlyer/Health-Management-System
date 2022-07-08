// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int s=0; int e=nums.size()-1; int ans=-1; int mid=s+(e-s)/2;
//         while(s<e)
//         {
//             mid=s+(e-s)/2;

//             if(nums[mid]>=nums[0])
//             {
//                 s=mid+1;
//             }
//             else
//                 e=mid;
//         }
        
        
//         int piv=s;
        
//         if(target>=nums[piv] && target<=nums[nums.size()-1])
//         {
//             int s=piv,e=nums.size()-1;
//             while(s<=e)
//             {
//                 int mid=s+(e-s)/2;
//                 if(nums[mid]==target)
//                 {
//                     return mid;
//                 }
//                 else if(nums[mid]<target)
//                 {
//                     s=mid+1;
//                 }
//                 else e=mid-1;
//             }
//         }
            
//             else
//             {
//             s=0,e=piv;
//                 while(s<=e)
//                 {
//                     int mid=s+(e-s)/2;
//                     if(nums[mid]==target)
//                     {
//                         return mid;
//                     }
//                     else if(nums[mid]<target)
//                     {
//                         s=mid+1;
//                     }
//                     else e=mid-1;
//                 }
//             }
//         return ans;
//         }
    
        
//     };