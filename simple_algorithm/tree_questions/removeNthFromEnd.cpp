//删除链表的倒数第N个节点
//https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xn2925/

//解法1:双指针法 时间复杂度 O(N) 空间复杂度O(1)

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* right=head;
        ListNode* newhead = new ListNode(0);
        newhead->next=head;
        ListNode* left=newhead;
        for(int i = 0; i < n; i++){
            right=right->next;
        }
        while(right){
            left = left->next;
            right = right->next;
        }
        left->next=left->next->next;
        return newhead->next;
    }
};