/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
      
    if(head== nullptr || k==1){
        return head;
           }
                    stack <ListNode*> st;
                    ListNode* curr = head;
                    ListNode* prev= nullptr;
                    ListNode* newhead= head; 
    while(curr!=nullptr){
                                ListNode*temp= curr;
                                int count= 0; 
    while(temp!=nullptr && count < k){
       
         temp=temp->next;
            count++;
      }
      if (count<k){
        if(prev!=nullptr){
            prev->next= curr;
        }
        break;
      }

      for(int i=0; i<k; i++){
        st.push(curr);
        curr=curr->next; 
        
      }
      while(!st.empty()){
        if(prev==nullptr){
            prev= st.top();
            st.pop();
            newhead= prev;
        }
        else{
            prev->next= st.top();
            st.pop();
            prev= prev->next;
        }
      }
      prev->next= nullptr; 
    }
    return newhead;
    }
};