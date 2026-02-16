#include<vector>
  #include<iostream>
  using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int count = 0;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        vector<int> arr(count);
        temp = head;

        for (int i = 0; i < count; i++) {
            arr[i] = temp->val;
            temp = temp->next;
        }

        temp = head;
        for (int i = count - 1; i >= 0; i--) {
            if (arr[i] != temp->val) {
                return false;
            }
            temp = temp->next;
        }

        return true;
    }
};