#include<bits/stdc++.h>
using namespace std;

struct ListNode{
  ListNode* next;
  int val;
};

ListNode* removeElement(ListNode* head, int val){
  while (head != NULL && head->val == val)
  {
    head = head->next;
  }
  ListNode* curr = head;

  while (curr->next != NULL && curr != NULL)
  {
    if(curr->next->val == val){
      curr->next = curr->next->next;
    }else{
      curr = curr->next;
    }
  }
  return head;
}