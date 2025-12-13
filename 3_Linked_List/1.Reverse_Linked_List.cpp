#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
   ListNode *reverseList(ListNode *head)
   {
      ListNode *prev = NULL;
      ListNode *curr = head;

      while (curr != NULL)
      {
         ListNode *temp = curr->next;
         curr->next = prev; // changing links in reverse
         prev = curr;       // update prev
         curr = temp;       // update curr
      }
      return prev;
   }
};

struct ListNode
{
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};