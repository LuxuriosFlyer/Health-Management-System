// bool isAnagram(string s, string t) {
//         int arr[26]={0};
//         for(int i=0;i<s.length();i++)
//         {
//             char ch=s[i];
//             int index= ch - 'a';
//             arr[index]++;
//         }
//         for(int i=0;i<t.length();i++)
//         {
//             char ch=t[i];
//             int index= ch - 'a';
//             arr[index]--;
//         }
//         for(int i=0;i<26;i++)
//         {
//             if(arr[i]!=0)
//                 return false;
//         }
//         return true;



// MAP


// bool isAnagram(string s, string t) {
//         map<char,int>m;
//         for(int i=0;i<s.length();i++)
//         {
//             char ch=s[i];
//             m[ch]++;
//         }
//         for(int i=0;i<t.length();i++)
//         {
//             char ch=t[i];
//             m[ch]--;
//         }
//         for(auto i:m)
//         {
//             if(i.second!=0)
//                 return false;
//         }
//         return true;