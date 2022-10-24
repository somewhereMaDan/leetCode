#include<bits/stdc++.h>
using namespace std;

struct ListNode{
  ListNode* next;
  int val;
};

void deleteNode(ListNode* node){
  ListNode* curr = node;
  curr->val = curr->next->val;
  curr->next = curr->next->next;
}