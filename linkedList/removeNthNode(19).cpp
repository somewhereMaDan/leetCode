#include<bits/stdc++.h>
using namespace std;

struct ListNode{
  int val;
  ListNode* next;
};

ListNode* removeNthFromEnd(ListNode* head, int n){
  ListNode* dummy = new ListNode();
  dummy->next = head;

  ListNode* fast = dummy;
  ListNode* slow = dummy;

  for (int i = 1; i <= n; ++i)
  {
    fast = fast->next;
  }

  while (fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next;
  }

  ListNode* temp = slow->next;
  slow->next = slow->next->next;
  delete(temp);

  return dummy->next;
  
}