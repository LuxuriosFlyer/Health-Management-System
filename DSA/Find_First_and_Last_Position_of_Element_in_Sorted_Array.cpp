// SELF


// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) 
//     {
//         int s=0,e=nums.size()-1,mid=s+(e-s)/2,max=-1,min=-1;
//         vector <int> ans;
//         if(nums.size()==1)
//         {
//             if(nums[0]==target)
//             {
//                 ans.push_back(0);
//                 ans.push_back(0);
//                 return ans;
//             }
//             else
//             {
//                 ans.push_back(-1);
//                 ans.push_back(-1);
//                 return ans;
//             }
//         }
//         if(nums.size()==2)
//         {
//             if(nums[0]==target && nums[1]!=target)
//             {
//                 ans.push_back(0);
//                 ans.push_back(0);
//                 return ans;
//             }
//             else if(nums[1]==target && nums[0]!=target)
//             {
//                 ans.push_back(1);
//                 ans.push_back(1);
//                 return ans;
//             }
//             else if(nums[1]==target && nums[0]==target)
//             {
//                 ans.push_back(0);
//                 ans.push_back(1);
//                 return ans;
//             }
//             else
//             {
//                 ans.push_back(-1);
//                 ans.push_back(-1);
//                 return ans;
//             }
//         }
//         while(s<=e)
//         {
//             if(nums[mid]<target)
//             {
//                 s=mid+1;
//             }
//             else if(nums[mid]==target)
//             {
//                 max=mid;
//                 s=mid+1;
//             }
//             else
//                 e=mid-1;
//             mid=s+(e-s);
//         }
//         s=0;e=nums.size()-1;
//          while(s<=e)
//         {
//             if(nums[mid]<target)
//             {
//                 s=mid+1;
//             }
//             else if(nums[mid]==target)
//             {
//                 min=mid;
//                 e=mid-1;
//             }
//             else
//                 e=mid-1;
//              mid=s+(e-s);
//         }
//         ans.push_back(min);
//         ans.push_back(max);
//         return ans;
//     }
// };
