// vector<int> separateNegativeAndPositive(vector<int> &nums){
//     int start=0;
// 	int mid=0;
// 	int end=nums.size()-1;
// 	while(mid<=end)
// 	{   
 		
// 		while(end>mid && nums[end]>=0)
// 		{
// 			end--;
// 		}
// 		if(nums[mid]<0)
// 		{
// 			swap(nums[mid],nums[start]);
// 				start++;mid++;
// 		}
// 		else if(nums[mid]>=0)
// 		{
// 			swap(nums[mid],nums[end]);
// 			mid++;end--;
// 		}
// 	}
// 	return nums;
// }