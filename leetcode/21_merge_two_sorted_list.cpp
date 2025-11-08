#include <iostream>
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (!list1) return list2;
        if (!list2) return list1;

        ListNode* newList = new ListNode(); // dummy head
        ListNode* p = newList;

        ListNode* temp = list1;
        ListNode* ttemp = list2;

        // Fix: Loop while both lists are non-null
        while (temp != nullptr && ttemp != nullptr)
        {
            if (temp->val < ttemp->val)
            {
                p->val = temp->val;
                temp = temp->next;
            }
            else
            {
                p->val = ttemp->val;
                ttemp = ttemp->next;
            }

            // Only make a new node if more merging is needed
            if (temp != nullptr && ttemp != nullptr) {
                p->next = new ListNode();
                p = p->next;
            }
        }

        // If one list still has nodes, attach them
        while (temp != nullptr) {
            p->next = new ListNode(temp->val);
            p = p->next;
            temp = temp->next;
        }

        while (ttemp != nullptr) {
            p->next = new ListNode(ttemp->val);
            p = p->next;
            ttemp = ttemp->next;
        }

        return newList; // return dummy head (first node is correct value now)
    }
};


int main(){
    ListNode* a=new ListNode();
    ListNode* p=a;
    p->val=10;
    cout<< a->val;
    p->next=new ListNode();
    p=p->next;
    p->val=20;
    
    cout<< a->next->val;
}