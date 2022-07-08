// void func(vector<int>& nums,int i,vector<int> temp, set<vector<int>>& s)
//     {
//         if(i==nums.size())
//         {
//             s.insert(temp);
//             return;
//         }
        
//         temp.push_back(nums[i]);
//         func(nums,i+1,temp,s);
        
//         temp.pop_back();
//         func(nums,i+1,temp,s);
//     }
    
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
//          set <vector<int>> s;
        
//          vector<int> temp;
        
//         vector<vector<int>> ans;
        
//         sort(nums.begin(),nums.end());
        
//         func(nums,0,temp,s);
        
//         ans.assign(s.begin(),s.end());
    
//         return ans;