#include <iostream>
using namespace std;

struct ListNode
{
  int data;
  ListNode *next;
};

ListNode *head = NULL;

void Insert(int position, int data)
{
  ListNode *temp = new ListNode();
  temp->data = data;
  temp->next = NULL;

  if (position == 1)
  {
    temp->next = head;
    head = temp;
    return;
  }
  else
  {
    ListNode *temp2 = head;
    for (int i = 0; i < position - 2; i++)
    {
      temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
  }
}

// Example: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6

ListNode* removeElement(ListNode* head ,int data) // data which we want to delete
{
  ListNode* dummy = head->next;
  ListNode* prev = dummy;
  ListNode* curr = head;

  while (curr != NULL)
  {
    ListNode* nxt = curr->next;
    if(curr->data == data){
      // prev = curr->next;
      // curr = prev;
      prev->next = nxt;
    }else{
      prev = curr;
      // prev = curr;
      // curr = curr->next;
    }
    curr = nxt;
  }
  return dummy->next;
  // Since the only extra memory we're using is pointer so,
  // space complexity is -> O(1)
  // time complexity is -> O(n), beacuse we're iteratiog through whole list 
}

void print()
{
  ListNode *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  Insert(1, 1);
  Insert(2, 2);
  Insert(3, 6);
  Insert(4, 3);
  Insert(5, 4);
  Insert(6, 5);
  Insert(7, 6);

  print();
  removeElement(head,6);
  print();

  return 0;
}
