int calculateMinPatforms(int at[], int dt[], int n) {
    int i=0,j=0,platform=1,ans=1;
	sort(at,at+n);
	sort(dt,dt+n);
	while(i<n && j<n)
	{
		if(at[i]<dt[j] && i<n && j<n)
		{
			platform++;
			i++;
			if(ans<platform)
			{
				ans=platform;
			}
		}
		else if(at[i]>dt[j] && i<n && j<n)
		{
			platform--;
			j++;
		}
		
	}
	return ans;
}





SOL 






int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int platform=1,ans=1,i=1,j=0;
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            platform++;
            i++;
        }
        else if(at[i]>dt[j]){
            platform--;
            j++;
        }
        if(platform>=ans)
            ans=platform;
    }
    return ans;
}