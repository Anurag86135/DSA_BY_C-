#include<iostream>
using namespace std;

// Definition of ListNode

class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int x){
        val = x;
        next =NULL;
    }
};


// Function to find the middle of the linked list
class Solution{
    public:
ListNode* middleNode(ListNode* head){
    ListNode* slow =head;
    ListNode* fast = head;

    while(fast != NULL && fast->next !=NULL){
        slow = slow->next; // move slow by 1 start
        fast = fast->next->next; // move fast by 2 steps
    }
    return slow;
}
};

int main(){
    // Create a Linked list 1->2->3->4->5->NULL

    ListNode* head = new ListNode(1);
    head->next =new ListNode(2);
    head->next->next =new ListNode(3);  
    head->next->next->next =new ListNode(4);
    head->next->next->next->next =new ListNode(5);
   Solution sol;
   ListNode* middle =sol.middleNode(head);
   cout<<"Middle Node:"<<middle->val<<endl;

    return 0;
}