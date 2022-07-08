// string reverseWord(string str){
    
//   //Your code here
//   int s=0,e=str.length()-1;
//   while(s<=e)
//   {
//       swap(str[s],str[e]);
//       s++;e--;
//   }
//   return str;


// RECURSION


// void revV(int i, int e, vector<char>&s)
//     {
//         if(i>e)
//             return;
//         swap(s[i],s[e]);
//         revV(i+1,e-1,s);
//     }
    
    
//     void reverseString(vector<char>& s) {
//         int i=0,e=s.size()-1;
//         revV(i,e,s);
//     }