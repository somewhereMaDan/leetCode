#include<iostream>
using namespace std;

// here we're not given the head of the list, but we're given the node which we want to delete

struct ListNode{
  int val;
  ListNode* next;
};

// here we're not actually deleting the node, we are copying data and link from the next node 

void deleteNode(ListNode* Node){
  Node->val = Node->next->val;
  // We are giving value of the next Node into the Node
  Node->next = Node->next->next;
  // We are giving the address of the next node to the Node
}

int main(int argc, char const *argv[])
{
  return 0;
}
