class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        
        while(start<=end)
        {
            if(nums[end]==0)
            {
                end--;
            }
            
            else if(nums[start]==0)
            {
                swap(nums[start],nums[end]);
                start++,end--;
            }
            start++;
        }
        
    }
};