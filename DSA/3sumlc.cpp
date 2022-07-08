#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int no1;
	int no2;
	vector <int> sum;
	vector <vector<int>> triplet;
        triplet.clear();
         if(nums.size()<3)
        {
            triplet.clear();
            return triplet;
        }
       
	for(int i=0;i<nums.size()-2;i++)
   {
		for(int j=i+1;j<nums.size()-1;j++)
		{
			for(int k=j+1;k<nums.size();k++)
			{
				if(nums[i]+nums[k]+nums[j]==0)
			{
				sum.push_back(nums[i]);
				sum.push_back(nums[j]);
				sum.push_back(nums[k]);
                sort(sum.begin(),sum.end());
				triplet.push_back(sum);
				sum.clear();
				
			}
				
			}
			
		}
		
   }
	sort(triplet.begin(),triplet.end());
       for(int i=triplet.size()-2;i>=0;i--)
       {
            if(triplet[triplet.size()-1]==triplet[i])
            {
                triplet.pop_back();
            }
       }
       
    return triplet;
    }
};
}