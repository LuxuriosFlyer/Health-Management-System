#include <bits/stdc++.h>
using namespace std;

bool inner(int arr[],int n,long int t,int mid)
{
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mid)
        {
            int diff=arr[i]-mid;
            sum=sum+diff;
        }
    }
    if(sum>=t) return true;
    else return false;
}


int wood(int arr[],int n,long int t)
{
    sort(arr, arr+n);
    int ans=-1,s=0,e=arr[n-1], mid=s+(e-s)/2;
    while(s<=e)
    {
        if(inner(arr,n,t,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }mid=s+(e-s)/2;
    }
    return ans;
}

int main() {
	int n=4;long int t=7;
	cin>>n;
	cin>>t;
    int arr[n];
	for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
    int a=wood(arr,n,t);
    cout<<a;
	return 0;
}