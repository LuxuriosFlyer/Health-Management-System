//  bool isPalindrome(string s) {
//         int n=s.length();
//         string copy("");
//         for(int i=0;i<n;i++)
//         {
//             if(isalnum(s[i]))
//                 copy.push_back(tolower(s[i]));
//         }
//         int st=0,e=copy.length()-1;
//         while(st<e)
//         {
//             if(copy[st]!=copy[e])
//                 return false;
//             st++;e--;
//         }
//         return true;