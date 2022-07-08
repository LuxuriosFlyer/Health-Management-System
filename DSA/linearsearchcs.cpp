// #include <iostream>
// using namespace std;

// int findtarget(int arr[],int n, int x)
// 		{
// 			for(int i=0;i<n;i++)
// 			{
// 				if (arr[i]==x)
// 				{
// 					return i;
// 				}
// 			}
// 			return -1;
// 		}
// int main()
// {		
// 		int t,n,x;
// 		cin>>t;
// 		for(int i=0;i<t;i++)
// 		{   
// 			cin>>n;
//             int arr[n];
// 			for(int i=0; i<n;i++)
// 		    {
// 			cin>>arr[i];
// 		    }
// 			cin>>x;
// 			cout<<findtarget(arr,n,x)<<endl;
// 		}
//         return 0;
// }        

int linearSearch(int *arr, int n, int x)
{
    for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	}
	return -1;
}