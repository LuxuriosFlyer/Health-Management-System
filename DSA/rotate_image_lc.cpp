// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         for(int i=0;i<matrix.size();i++)
//         {
//             for(int j=0;j<i;j++)
//             {
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
       
//         for(int i=0;i<matrix.size();i++)
//         {
//              int lo=0;int hi=matrix.size()-1;
//             while(lo<hi)
//             {
//                 swap(matrix[i][lo],matrix[i][hi]);
//                 lo++;hi--;
//             }
//         }
//     }
// };