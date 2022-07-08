// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int e=nums.size()-1; int mid=0;int sum = 0;
//         for(int i=0;i<nums.size();i++)
//         {
//             sum=sum+nums[i];
//         }
//                 int ls=0;
//                 int rs=sum-(nums[mid]+ls);;
//            while(mid<=e)
//            {
//              if(mid==0)
//              {
//                  if(rs==0)
//                  {
//                      return mid;
//                  }
//                  else mid++;
//              }
//             else if(mid>0)
//             {  
//                 ls=ls+nums[mid-1];
//                 rs=sum-(nums[mid]+ls);
//                 if(ls==rs)
//                 {
//                     return mid;
//                 }
//                 else mid++;
//             }
//            }
//         return -1;
//     }
// };