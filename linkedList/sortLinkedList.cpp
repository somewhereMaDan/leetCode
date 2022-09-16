#include<iostream>
using namespace std;

struct ListNode{
  int val;
  ListNode* next;
  
  // ListNode(int data){
  //   next = NULL;
  // }
};

ListNode* head1 = NULL;
ListNode* head2 = NULL;

void Insert1(int val){
  ListNode* temp = new ListNode();
  temp->val = val;
  temp->next = head1;
  head1 = temp;
}

void Insert2(int val){
  ListNode* temp = new ListNode();
  temp->val = val;
  temp->next = head2;
  head2 = temp;
}

ListNode* mergeTwoSortedlist(ListNode* head1, ListNode* head2){
  ListNode* p1 = head1;
  ListNode* p2 = head2;
  ListNode* dummyListNode = new ListNode();
  dummyListNode->next = NULL;
  ListNode* p3 = dummyListNode;

  while (p1 != NULL && p2 != NULL)
  {
    if(p1->val < p2->val){
      p3->next = p1;
      p1 = p1->next;
    }else{
      p3->next = p2;
      p2 = p2->next;
    }
    p3 = p3->next;
  }

  // If one list gets empty or both does

  while (p1 != NULL)
  {
    p3->next = p1;
    p1 = p1->next;
    p3 = p3->next;
  }
  while (p2 != NULL)
  {
    p3->next = p2;
    p2 = p2->next;
    p3 = p3->next;
  }
  return dummyListNode->next;
}

void print1(){
  ListNode* temp = head1;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << "\n";
}

void print2(){
  ListNode* temp = head2;
  while (temp != NULL)
  {
    cout << temp->val << " ";
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

  print1();
  print2();

  head1 = mergeTwoSortedlist(head1, head2);
  print1();

  return 0;
}






































// #include<iostream>
// using namespace std;

// struct ListNode{
//   int val;
//   ListNode* next;
// };

// ListNode* head = NULL;

// void Insert(int val){
//   ListNode* temp = new ListNode();
//   temp->val = val;
//   temp->next = head;
//   head = temp;
// }

// ListNode* SelectionSort(ListNode* head){
//   // ListNode* i = head;
//   for (ListNode* i = head; i->next != NULL; i = i->next)
//   {
//     for (ListNode* j = i->next; j != NULL; j = j->next)
//     {
//       if(j->val < i->val){

//         int val = i->val;
//         i->val = j->val;
//         j->val = val;

//       }
//     }
//   }
//   return head;
// }

// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* temp1 = list1;
//         ListNode* temp2 = list2;
        
//         while(temp1 != NULL && temp1->next != NULL){
//             temp1 = temp1->next;
//         }
//         temp1->next = temp2;
//         while(temp2->next != NULL && temp2 != NULL){
//             temp2 = temp2->next;
//         }
//         ListNode* head = list1;
//         for(ListNode* i = head; i->next != NULL; i = i->next){
//             for(ListNode* j = i->next; j != NULL; j = j->next){
//                 if(j->val < i->val){
//                     int val = i->val;
//                     i->val = j->val;
//                     j->val = val;
//                 }
//             }
//         }
//         return list1;
//     }


// void print(){
//   ListNode* temp = head;
//   while (temp != NULL)
//   {
//     cout << temp->val << " ";
//     temp = temp->next;
//   }
//   cout << "\n";
// }

// int main(int argc, char const *argv[])
// {  
//   Insert(4);
//   Insert(2);
//   Insert(1);
//   Insert(1);
//   Insert(3);
//   Insert(4);

//   print();

//   head = SelectionSort(head);
//   print();
//   return 0;
// }
