#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* reverse(Node* head){
  Node* curr = head; 
  Node* prev; 
  Node* nxt;

  prev = NULL;
  
  while (curr != NULL)
  {
    nxt = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nxt;
  }
  return prev;
}