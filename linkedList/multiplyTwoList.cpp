#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* head1 = NULL;
Node* head2 = NULL;

void Insert1(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->next = head1;
  head1 = temp;
}

void Insert2(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->next = head2;
  head2 = temp;
}
// 1000000007
void multiplyList(){
  long long limiT = 1000000007;
  long long num1 = 0, num2 = 0;
  Node* h1 = head1;
  Node* h2 = head2;

  while (h1 != NULL)
  {
    num1 = (num1*10+(h1->data))%limiT; // to limit the value
    h1 = h1->next;
  }
  while (h2 != NULL)
  {
    num2 = (num2*10+(h1->data));
    h2 = h2->next;
  }
  cout << (num1*num2)%limiT;
}

int main(int argc, char const *argv[])
{
  Insert1(1);
  Insert1(2);

  Insert2(1);
  Insert2(2);

  multiplyList();
  return 0;
}








































// #include<iostream>
// using namespace std;

// struct Node{
//   int data;
//   Node* next;
// };

// Node* head1 = NULL;
// Node* head2 = NULL;

// void Insert1(int data){
//   Node* temp = new Node();
//   temp->data = data;
//   temp->next = head1;
//   head1 = temp;
// }

// void Insert2(int data){
//   Node* temp = new Node();
//   temp->data = data;
//   temp->next = head2;
//   head2 = temp;
// }

// long printMultiply(){
//   long long int num1 = 0, num2 = 0;
//   long long int limiT = 1000000007; // this is the limiT, that should not exceed for this program
//   Node* temp1 = head1;
//   Node* temp2 = head2;

//   while(temp1 != NULL){
//     // below statement should all have sameDataType like we have to take long
//     num1 = (num1*10+(temp1->data))%limiT;
//     // like, ex.. 1->2->3->4->5->NULL
//     // num1 = 1; num1 = 10+2; num1 = 120+3; num1 = 1230+4; num1 = 12340+5;
    
//     temp1 = temp1->next;
//   }

//   while (temp2 != NULL)
//   {
//     num2 = (num2*10+(temp2->data))%limiT;
//     temp2 = temp2->next;
//   }
//   return(num1*num2)%limiT;
// }

// void print1(){
//   Node* temp = head1;
//   while (temp != NULL)
//   {
//     cout << temp->data << endl;
//     temp = temp->next;
//   }
// }

// int main(int argc, char const *argv[])
// {
//   Insert1(4);
//   Insert1(2);
//   Insert1(1);

//   print1();

//   Insert2(4);
//   Insert2(3);
//   Insert2(1);

//   cout << printMultiply();
//   return 0;
// }
