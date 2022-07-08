// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) 
//     {
//         vector <int> ans(nums.size(),0);
        
//         int negin=1;int posin=0;int mid=0;
//         {
//             while(mid<nums.size())
//             {
               
//                 if(nums[mid]>=0)
//                 {
//                     ans[posin]=nums[mid];
//                         posin+=2;
//                 }
//                 else if(nums[mid]<0)
//                 {
//                     ans[negin]=nums[mid];
//                     negin+=2;
//                 }
//                 mid++;
//             }
//         }
            
//         return ans;
//     }
// };