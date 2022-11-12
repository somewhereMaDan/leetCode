#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
  int val;
  ListNode* next;
  ListNode* prev;
};

ListNode* reverseDLL(ListNode* head){
  if(head == NULL || head->next == NULL){
    return head;
  }

  ListNode* curr = head;
  while (curr->next != NULL)
  {
    curr = curr->next;
  }
  head = curr;
  curr->next = curr->prev;
  curr->prev = NULL;
  curr = curr->next;

  while (curr->prev != NULL)
  {
    ListNode* temp = curr->next;
    curr->next = curr->prev;
    curr->prev = temp;
    curr = curr->next;
  }
  
  curr->prev = curr->next;
  curr->next = NULL;

  return head;
}
