// void inplaceRotate(vector<vector<int>> &inputArray)
// {
//       for(int i=0;i<inputArray.size();i++)
//         {
//             for(int j=0;j<i;j++)
//             {
//                 swap(inputArray[i][j],inputArray[j][i]);
//             }
//         }
       
//         for(int j=0;j<inputArray.size();j++)
//         {
//              int lo=0;int hi=inputArray.size()-1;
//             while(lo<hi)
//             {
//                 swap(inputArray[lo][j],inputArray[hi][j]);
//                 lo++;hi--;
//             }
// 		}
// }