// void func(vector <int> arr, int n, int i, int sum, vector<int>& sol,vector <int> temp)
//     {
//         if(i>=n)
//         {
//             sol.push_back(sum);
//             return;
//         }
        
//         func(arr,n,i+1,arr[i]+sum,sol,temp);
        
//         func(arr,n,i+1,sum,sol,temp);
//     }


//     vector<int> subsetSums(vector<int> arr, int N)
//     {
//         // Write Your Code here
//         vector <int> sol;
//         vector <int> temp;
//         func(arr,N,0,0,sol,temp);
//         return sol;
// }