// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) 
//     {
//         int m = matrix.size();
//         int n = matrix[0].size();
//         int strow=0;int stcol=0;int endrow=m-1;int endcol=n-1;
//         vector<int> ans;
//         int dir=1;
//         while(strow<=endrow && stcol<=endcol)
//         {
//             if(dir==1)
//             {
//                for(int i=stcol;i<=endcol;i++)
//              {
//                ans.push_back(matrix[strow][i]);
//              }
//              strow++;dir=2;
//             }
            
//         else if(dir==2)
//         {
//               for(int i=strow;i<=endrow;i++)
//              {
//                ans.push_back(matrix[i][endcol]);
//              }
//              endcol--;dir=3;
//         }
            
//         else if(dir==3)
//         {
//               for(int i=endcol;i>=stcol;i--)
//              {
//                ans.push_back(matrix[endrow][i]);
//              }
//              endrow--;dir=4;
//         }
            
//         else if(dir==4)
//         {
//               for(int i=endrow;i>=strow;i--)
//                 {
//                  ans.push_back(matrix[i][stcol]);
//                 }
//                   stcol++;dir=1;
//         }
//         }    
//         return ans;
//     }
    
// };