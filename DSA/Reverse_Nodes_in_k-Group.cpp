// LC





// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         ListNode* cursor = head;
//         for(int i = 0; i < k; i++){
//             if(cursor == nullptr) return head;
//             cursor = cursor->next;
//         }
        
//         ListNode* prev=NULL;
//         ListNode* curr=head;
//         int cnt=0;
//         ListNode* next=NULL;
//         while(curr!=NULL && cnt!=k)
//         {
//             next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//             cnt++;
//         }
        
//         if(next!=NULL)
//         {
//             ListNode* rem=reverseKGroup(next,k);
        
//         head->next=rem;
            
//         }
        
//         return prev;
//     }
// };





// GFG




// class Solution
// {
//     public:
//     struct node *reverse (struct node *head, int k)
//     { 
//         // Complete this method
        
//         if(head==NULL)
//         {
//             return NULL;
//         }
        
//         struct node* prev=NULL;
//         struct node* curr=head;
//         int cnt=0;
//         struct node* next=NULL;
//         while(curr!=NULL && cnt!=k)
//         {
//             next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//             cnt++;
//         }
        
//         if(next!=NULL)
//         {
//             node* rem=reverse(next,k);
        
//         head->next=rem;
            
//         }
        
//         return prev;
//     }
// };