#include<bits/stdc++.h>
using namespace std;

struct ListNode{
  int val;
  ListNode* next;
};

ListNode* cycle(ListNode* head){
  ListNode* slow = head;
  ListNode* fast = head;
  ListNode* entry = head;

  if(head == NULL || head->next == NULL){
    return NULL;
  }
  
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;

    if(slow == fast){
      while (slow != entry)
      {
        slow = slow->next;
        entry = entry->next;
      }
      return entry;
    }
  }
  return NULL;
}