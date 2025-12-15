#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
   ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
   {
      // if 1st list is null then return 2nd list
      if (list1 == NULL)
      {
         return list2;
      }
      // if 2nd list is null then return 1st list
      if (list2 == NULL)
      {
         return list1;
      }
      // if value of list1 is less than or equal to list2
      // kept it and set it's next pointer recursively
      if (list1->val <= list2->val)
      {
         list1->next = mergeTwoLists(list1->next, list2);
         return list1;
      }
      // if value of list2 is less than or equal to list1
      // kept it and set it's next pointer recursively
      else
      {
         list2->next = mergeTwoLists(list1, list2->next);
         return list2;
      }
   }
};