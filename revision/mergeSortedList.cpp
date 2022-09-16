#include<iostream>
using namespace std;

struct ListNode{
  int data;
  ListNode* next;
};

ListNode* head1 = NULL;
ListNode* head2 = NULL;

void Insert1(int data){
  ListNode* temp = new ListNode();
  temp->data = data;
  temp->next = head1;
  head1 = temp;
}

void Insert2(int data){
  ListNode* temp = new ListNode();
  temp->data = data;
  temp->next = head2;
  head2 = temp;
}


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
  ListNode* dummy = new ListNode();
  dummy->next = NULL;

  ListNode* p3 = dummy;

  ListNode* h1 = list1;
  ListNode* h2 = list2;

  while (h1 != NULL && h2 != NULL)
  {
    if(h1->data < h2->data)
    {
      p3->next = h1;
      h1 = h1->next;
    }
    else
    {
      p3->next = h2;
      h2 = h2->next;
    }
    p3 = p3->next;
  }
  while (h1 != NULL)
  {
    p3->next = h1;
    h1 = h1->next;
    p3 = p3->next;
  }
  while (h2 != NULL)
  {
    p3->next = h2;
    h2 = h2->next;
    p3 = p3->next;
  }
  return dummy->next;
}

void print(ListNode* st){
  ListNode* temp = st;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  Insert1(4);
  Insert1(2);
  Insert1(1);

  Insert2(4);
  Insert2(3);
  Insert2(1);

  ListNode* start = mergeTwoLists(head1,head2);
  print(start);
  return 0;
}
