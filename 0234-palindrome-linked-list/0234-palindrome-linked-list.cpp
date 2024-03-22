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
    bool isPalindrome(ListNode* head) {
        if(head->next == nullptr) return true;
        //step-1 -> find the middle element
        ListNode* prev = nullptr;
        ListNode* sp = head;
        ListNode* fp = head;

        while(fp!=nullptr && fp->next != nullptr){
            prev = sp;
            sp = sp->next;
            fp = fp->next->next;
        }

        //step -2 make first hald and second hald
        ListNode* firstHalf = head;
        prev->next = nullptr;
        ListNode* secHalf = sp;

        //step-3 reverse 2nd half
        ListNode* revSecHalf = reverseList(secHalf);

        //step-4 compare firstHald and reverSecHalf
        while(firstHalf != nullptr){
            if(firstHalf->val != revSecHalf->val)
               return false;
            //move both pointers
            firstHalf = firstHalf->next;
            revSecHalf = revSecHalf->next;
        }

        return true;
        

    }


     ListNode* reverseList(ListNode* head) {
        ListNode* ans = nullptr;
        ListNode* cur = head;

        while(cur != nullptr){
            //store the next node
            ListNode* temp = cur->next;
            //add cur node to ans
            cur->next = ans;
            //update ans to cur
            ans = cur;
            //make cur to next node that we stored in temp
            cur = temp;
        }

        return ans;
    }
};