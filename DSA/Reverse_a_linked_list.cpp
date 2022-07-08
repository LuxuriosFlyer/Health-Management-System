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
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev=NULL;
//         ListNode* curr=head;
        
//         while(curr!=NULL)
//         {
//             ListNode* nex=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nex;
//         }
//         return prev;
//     }
// };


// RECURSIVE


// void func(ListNode* &head, ListNode* &prev, ListNode* &curr)
//     {
//         if(curr==NULL)
//         {
//             head=prev;
//             return;
//         }
        
//         ListNode* nex=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=nex;
//         func(head,prev,curr);
//     }
    
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev=NULL;
//         ListNode* curr=head;
//         func(head,prev,curr);
        
//         return prev;
//     }
// };