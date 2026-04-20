#include<iostream>
using namespace std;

// Definition of ListNode

class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int x){
        val = x;
        next= NULL;
    }
};

class Solution{
    public:
    bool hasCycle(ListNode* head){
        ListNode* slow =head;
        ListNode* fast = head;

        while(fast != NULL && fast->next !=NULL){
            slow= slow->next;
            fast= fast->next->next;

            if(slow == fast){
                return true; // cycle detected
            }
        }
        return false; // no cycle detected
    }
};

int main(){
    // Create a linked list

    ListNode* head =new ListNode(1);
    head->next = new ListNode(2);
    head->next->next =new ListNode(3);
    head->next->next->next =new ListNode(4);
    head->next->next->next->next =new ListNode(5);


    // condition for cycle
    head->next->next->next->next = head->next;

    Solution obj;
    if(obj.hasCycle(head)){
        cout<<"Cycle detected in the Linked List: "<<endl;

    }else{
        cout<<"No cycle detected in the Linked List: "<<endl;
    }
    return 0;
}