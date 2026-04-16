#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int val){
        data =val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head=tail=NULL;
    }


    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head=tail=newNode;
            return;

        }else{
            newNode->next=head;
            head=newNode;
        }
    }


    void push_back(int val){
        Node* newNode = new Node(val);

        if(head ==NULL){
            head =tail =newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void PrintLL(){
        Node* temp =head;

        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;

        }
        cout<<"NULL"<<endl;
    }

    // other functions like pop_front, pop_back, insertAtPosition, deleteAtPosition, etc. can be implemented similarly.

    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty\n";
            return ;
        }
        Node*temp =head;
        head =head -> next;
        delete temp;

    }

    void pop_back(){
        if(head==NULL){
            cout<<"LL is empty\n";
            return;

        }
        else{
            Node*temp =head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;

            delete tail;
            tail =temp;


        }
    }
    void insert (int val,int pos){
        if(pos <0){
            cout<<"Invalid pos\n";
            return ;
        }
        if(pos == 0){
            push_front(val);
            return ;
        }
        Node* temp = head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
         Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
      


};
int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    // ll.push_back(4);//pushing at the end of the linked list
    // ll.pop_front();
    // ll.pop_back();
    ll.insert(2,3);
    ll.PrintLL();
    return 0;

}