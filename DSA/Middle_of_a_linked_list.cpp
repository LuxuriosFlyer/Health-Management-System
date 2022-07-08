// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */


// ITERATIVE


// class Solution {
// public:
    
//     int getLen(ListNode* temp)
//     {
//         int n=0;
//         while(temp!=NULL)
//         {
//             n++;
//             temp=temp->next;
//         }
//         return n;
//     }
    
//     ListNode* middleNode(ListNode* head) {
//         ListNode* temp=head;
//         int n=getLen(temp);
        
//         int half=(n/2)+1;
//         int cnt=1;
//         while(cnt!=half)
//         {
//             temp=temp->next;
//             cnt++;
//         }
//         return temp;
//     }
// };