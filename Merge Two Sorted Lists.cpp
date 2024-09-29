
Problem Name: Merge Two Sorted Lists

Problem on leetcode: https://leetcode.com/problems/merge-two-sorted-lists/

Solve Problem :

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode*head;
      ListNode*ptr;
      ListNode*ctr;
      vector<int>v;
        while(list1){
            v.push_back(list1->val);
            list1=list1->next;
        }
        while(list2){
            v.push_back(list2->val);
            list2=list2->next;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            
            ptr=new ListNode();
            ptr->val=v[i];
            
            if(i==0){
                head=ptr;
                ctr=head;
            }else{
                ctr->next=ptr;
                ctr=ctr->next;
            }
        }
        return head;
    }
};