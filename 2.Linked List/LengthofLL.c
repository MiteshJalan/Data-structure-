#include <stdio.h>
struct ListNode
{
  int data;
  struct ListNode *next;
}
int ListLength(struct ListNode *head)
{
  int count=0;
  struct LinkNode *current=head;
  while (current!=Null) {
    /* code */
    count++;
    current=current->next;
  }
  return count;
}
int main()
{


}
