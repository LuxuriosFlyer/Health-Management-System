class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        
        sort(arr,arr+n);
        int mini=arr[0],maxi=arr[n-1];
        int ans=maxi-mini;
        for(int i=1;i<n;i++)
        {
            mini=min(arr[0]+k,arr[i]-k);
            maxi=max(arr[n-1]-k,arr[i-1]+k);
        }
        ans=min(maxi-mini,ans);
        return ans=maxi-mini;
    }
};