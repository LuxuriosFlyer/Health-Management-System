vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    int m=arr.size(), n=arr[0].size(), strow=0, stcol=0, endrow=m-1, endcol=n-1, count=0;
	vector<int> ans;
	while(count<m*n)
	{
		for(int i=strow; i<=endrow && count<m*n; i++)
		{
			ans.push_back(arr[i][stcol]);
			count++;
		}
		stcol++;
		for(int i=endrow; i>=strow && count<m*n; i--)
		{
			ans.push_back(arr[i][stcol]);
			count++;
		}
		stcol++;
	}
	return ans;
}