// class Solution
// {
//     public:

//     char getMaxOccurringChar(string s)
//     {

//         // char ans='z';
//         // int max=-1,cnt;
//         // sort(str.begin(),str.end());
//         // if(str.size()==1)
//         // return str[0];
//         // for(int i=0;i<str.length();i++)
//         // {
//         //     cnt=0;
//         //     if(str[i]!='0')
//         //     {
//         //         for(int j=0;j<str.length();j++)
//         //     {
                
//         //         if (str[j]==str[i])
//         //         {
//         //             cnt++;
                    
//         //             if(cnt>max)
//         //             {
//         //                 max=cnt;
//         //                 ans=str[j];
                        
//         //             }str[j]='0';
                    
//         //         }
//         //     }
//         //     }
//         // }
//         // return ans;
        
//         int arr[26]={0};
//         int ans=-1;
//         int max=-1;
//         for(int i=0;i<s.size();i++)
//         {
//             int number=s[i]-'a';
//             arr[number]++;
//         }
//         for(int i=0;i<26;i++)
//         {
            
//             if(arr[i]>max)
//             {
//                 ans=i;
//                 max=arr[i];
//             }
//         }
//         return ans+'a';
//     }

// };