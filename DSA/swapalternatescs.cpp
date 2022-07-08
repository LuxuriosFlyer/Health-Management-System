
// void rearrange(vector<int> &arr)
// {
// 	for(int i=0;i<arr.size();i++)
// 	{
// 		if(arr[i]<0 && arr[i+1]>=0)
// 		{
		
// 		}
// 		else if(arr[i]<0 && arr[i+1]<0)
// 		{
// 			for(int j=i;j<arr.size();j++)
// 			{
// 				if(arr[j]>=0)
// 				{
// 					swap(arr[i+1],arr[j]);
// 				}
// 			}
// 		}
// 		else if (arr[i]>=0 && arr[i+1]<0)
// 		{
// 			swap(arr[i],arr[i+1]);
// 		}
// 		else if(arr[i]>=0 && arr[i+1]>=0)
// 		{
// 			for(int j=i;j<arr.size();j++)
// 			{
// 				if(arr[j]<0)
// 				{
// 					swap(arr[i],arr[j]);
// 				}
// 				else{}
// 			}
// 		}
// 		i++;
// 	}
// }
























// void rearrange(vector<int> &arr)
// {
// 	// Write your code here.
// 	int n = arr.size();
// 	int i=0;
// 	int j=n-1;
// 	while(i<j){
// 		while(i<=n-1 && arr[i]>0){
// 			i+=1;
// 		}
// 		while(j>=0 && arr[j]<0){
// 			j-=1;
// 		}
// 		if(i<j){
// 			swap(arr[i],arr[j]);
// 		}
// 	}
// 	if(i==0 || i==n){
// 		return;
// 	}
// 	int k=0;
// 	while(k<n && i<n){
// 		swap(arr[k],arr[i]);
// 		i=i+1;
// 		k=k+2;
		
// 	}
// }