// string reverseWords(string s) 
//     { 
//         // code here
//         int e=s.length();
//         string ans="";
//         while(e!=0)
//         {
//             e--;
//             if(s[e]=='.')
//             {
//                 int t=e+1;
//                 while(t<=s.length())
//                 {
//                     ans.push_back(s[t]);
//                     t++;
//                     if(s[t]=='.' || t==s.length())
//                     {
//                         ans.push_back('.');
//                         break;
//                     }
//                 }
//             }
            
//             else if(e==0)
//             {
//                 int t=e;
//                 while(t<=s.length())
//                 {
//                     ans.push_back(s[t]);
//                     t++;
//                     if(s[t]=='.' || t==s.length())
//                     {
                    
//                         break;
//                     }
//                 }
//             }
//         }
//         return ans;