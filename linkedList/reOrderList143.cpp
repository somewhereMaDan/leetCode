#include<bits/stdc++.h>
using namespace std;

struct ListNode{
  int val;
  ListNode* next;
};

// rever-sing the 2nd part of the list
ListNode* reverse(ListNode* slow){
    ListNode* curr = slow;
    ListNode* prev = NULL;
    ListNode* Next;

    while (curr != NULL)
    {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev; // head node of the reverse-d list
}

void merge(ListNode* l1, ListNode* l2){
    while (l1 != NULL)
    {
        ListNode* l1_next = l1->next;
        ListNode* l2_next = l2->next;
        
        l1->next = l2;
    
        if(l1_next == NULL){
            break;
        }

        l2->next = l1_next;

        l1 = l1_next;
        l2 = l2_next;
    }
    
}
ListNode* getMid(ListNode* head){
    if(head == NULL || head->next == NULL) return;

    ListNode* slow = head; 
    ListNode* fast = head;
    ListNode* temp;

    while (fast != NULL && fast->next != NULL)
    {
        temp = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    temp->next = NULL; // breking the list 
    return slow;
}

void reorderList(ListNode* head){
    

    ListNode* slow = getMid(head); // head of the 2nd part of the list before reverse

    ListNode* l1 = head;
    ListNode* l2 = reverse(slow); // head of the 2nd part of the list

    merge(l1,l2);
}



































// void reorderList(ListNode* head){
//      ListNode* slow = head;
//         ListNode* fast = head;
//         ListNode* temp;
        
//         while(fast != NULL && fast->next != NULL){
//             temp = slow;
//             slow = slow->next;
//             fast = fast->next->next;
//         }
        
//         temp->next = NULL; // breaking the list in two half
        
//         // ListNode* second = slow;
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* Next;
        
//         while(curr != NULL){
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = Next;
//         }
        
//         ListNode* first = head;
//         ListNode* second = prev;
        
//         while(first != NULL && second != NULL){

//             ListNode* temp1 = first->next;
//             ListNode* temp2 = second->next;
            
//             first->next = second;
//             second->next = temp1;
            
//             first = temp1;
//             second = temp2;
//         }
// }































// void reorderList(ListNode* head) {
//         ListNode* curr = head;
//         queue<int> ans;
//         vector<int> cont;
        
//         while(curr != NULL){
//             ans.push(curr->val);
//             curr = curr->next;
//         }
        
//         // for(int i = 0; i <= ans.size(); i++)
//         //     cont.push_back(ans[i]);
//         //     int end = ans.size() - x;
//         //     cont.push_back(ans[end]);
//         //     x++;
//         // }
        
//         // int x = 1;
//         while(!ans.empty()){
//             // int i = 0;
//             // int end = ans.size() - x;
            
//             cont.push_back(ans.front());
//             cont.push_back(ans.back());
//             ans.push(ans.back());
//             ans.pop();
//             ans.pop();
            
//             // x++;
//         }
//     }


// void reorderList(ListNode* head) {
//         ListNode* curr = head;
//         queue<int> ans;
//         vector<int> cont;
        
//         while(curr != NULL){
//             ans.push(curr->val);
//             curr = curr->next;
//         }
        
//         while(!ans.empty()){            
//             cont.push_back(ans.front());
//             cont.push_back(ans.back());
//             ans.pop_back();
//             ans.pop();
//         }
//         Insert(head, cont);
//     }
    
//     ListNode* Insert(ListNode* head, vector<int>& cont){
//         for(int i = 0; i < cont.size(); i++){
//             ListNode* temp = new ListNode();
//             temp->val = cont[i];
//             temp->next = head;
//             head = temp;
//         }
//         return head;
//     }
    