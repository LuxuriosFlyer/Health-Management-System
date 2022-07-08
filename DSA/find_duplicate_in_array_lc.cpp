// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) 
//     {
//         int ans;
//         vector<int> v(nums.size(),0);
//         for(int i=0;i<nums.size();i++)
//         {
//             v[nums[i]]++;
//         }
//         int max=INT_MIN;
//         for(int i=0;i<v.size();i++)
//         {
//             if(v[i]>max)
//             {
//                 max=v[i];
//             }
//         }
//         for(int i=0;i<v.size();i++)
//         {
//             if(v[i]==max)
//             {
//                 ans=i;
//             }
//         }
//         return ans;
//     }
// };