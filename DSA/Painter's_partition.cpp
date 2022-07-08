// bool ifPossible(vector<int> &boards, int k, int mid)
// {
//     int painter=1; int tot=0;
//     for(int i=0;i<boards.size();i++)
//     {
//         if(boards[i]>mid)
//             return false;
//         tot+=boards[i];
//         if(tot>mid)
//         {
//             painter++; tot=boards[i];
//         }
//     }
//     return painter<=k;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int s=0; int e=0 ; int ans=-1;
//     for(int i=0;i<boards.size();i++)
//     { 
//         e=e+boards[i];
//     }
//     while(s<=e)
//     {
//         int mid=s+(e-s)/2;
//         if(ifPossible(boards,k,mid))
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else s=mid+1;
//     }
//     return ans;
// }