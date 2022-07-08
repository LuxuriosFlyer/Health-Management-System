// class Solution {
// public:
//     int mySqrt(int x) {
//         int s=0,e=INT_MAX;long long int mid=s+(e-s)/2;
//         while(s<=e)
//         {
//             if(mid*mid==x)
//             {
//                 return mid;
//             }
//             else if(mid*mid<x && (mid+1)*(mid+1)>x)
//             {
//                 return mid;
//             }
//             else if(mid*mid>x)
//             {
//                 e=mid-1;
//             }
//             else if(mid*mid<x)
//                 s=mid+1;
//             mid=s+(e-s)/2;
//         }
//         return mid;
//     }
// };








// DECIMAL








// double squareRoot(long long x, int d)
// {
//     int temp=sqrt(x);
//     double ans=temp;
//      double factor=1;
//     for( int i=0;i<d;i++)
//     {
//         factor=factor/10;
//         for(double j=ans;j*j<x;j=j+factor)
//         {
//             ans=j;
//         }
//     }
//     return ans;
// }


// double sqrt(long long x) 
// {	
// 	int s=0;int e=x;long long mid=s+(e-s)/2;long long ans=-1;
    
//         while(s<=e)
//         {
//             if(mid*mid==x)
//             {
//                 return mid;
//             }
//             else if(mid*mid<x)
//             {
//                 ans = mid;
//                 s=mid+1;
//             }
//             else
//             {
//                 e=mid-1;
//             }
//             mid=s+(e-s)/2;
//         }
//         return ans;
// }