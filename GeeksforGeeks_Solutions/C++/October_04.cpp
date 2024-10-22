#include <iostream>
using namespace std;

class Solution{
public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        Node *i=head;
        Node *nxt;
        Node *pre=NULL;
        do{
            nxt=i->next;
            i->next=pre;
            pre=i;
            i=nxt;
        }while(i!=head);
        i->next=pre;
        head=pre;
        return head;
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        if(!head)return head;
        Node *i=head;
        while(i->data!=key){
            i=i->next;
            if(i==head)break;
        }
        if(i->data==key){
            i->data=i->next->data;
            i->next=i->next->next;
        }
        return head;
    }
};