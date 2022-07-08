#include <iostream>
#include <algorithm>
using namespace std;

bool IfPossible(int arr[],int p,int l,int mid)
{
    int count=0;
    for(int i=0;i<l;i++)
    {
        int time=mid;
        int c=0;
        int per=arr[i];
        while(time>0)
        {
            time=time-per;
            if (time>=0)
            {
                per+=arr[i];
                c++;
            }
        }
        count+=c;
    }
    if(count>=p)
    {
    	return true;
    }
    return false;
}

int MaxTime(int arr[],int p,int l)
{
    sort(arr,arr+l);
    int ans=-1,s=0,e=arr[0]*((p*(p+1))/2),mid=s+(e-s)/2;
    while(s<=e)
    {
        if(IfPossible(arr,p,l,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;cin>>p;
        int l;cin>>l;
        int arr[l];
        for(int j=0;j<l;j++)
        {
            cin>>arr[j];
        }
        cout<<MaxTime(arr,p,l)<<endl;
    }
    return 0;
}