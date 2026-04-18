#include<iostream>
using namespace std;
// Definition of ListNode
class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int x){
        val = x;
        next = NULL;
    }
};

// Function to reverse Linked list

ListNode* reverseList(ListNode* head) {
    ListNode* prev =NULL;
    ListNode* curr= head;
    ListNode* next =NULL;
    while(curr!=NULL){
        next  =curr -> next; // store the next node
        curr->next = prev; // reverse the current node's pointer

        prev =curr; // move prev and curr one step forward
        curr =next;
    }
    return prev;
}

// Helper function to print the linked list
void printList(ListNode * head){
    while(head != NULL){
        cout<<head->val<<"->";
        head =head->next;


    }
    cout<<"NULL"<<endl;
}

int main(){
    // Create a linked list 1->2->3->NULL
    ListNode* head =new ListNode(1);
    head->next = new ListNode(2);
    head->next->next =new ListNode(3);
    head->next->next->next =new ListNode(4);

    cout<<"Original List: ";
    printList(head);

    // Reverse ListNode
    head =reverseList(head);

    cout<<"Rversed List: ";
    printList(head);

    return 0;


}