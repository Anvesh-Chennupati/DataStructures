#include <iostream>

class Node {
public:
int data;
Node * next;
} *head=NULL;

using namespace std;

void push(Node **href, int data);

void display(Node **href);

void push(Node **href, int val){
        if(*href==NULL) {
                Node *new_node = new Node();
                new_node->data = val;
                new_node->next = NULL;
                *href = new_node;
        }
        else{
                Node *tra  = new Node();
                tra = *href;
                while(tra->next!= NULL) {
                        tra = tra->next;
                }
                Node * new_node = new Node();
                new_node->data = val;
                new_node->next = NULL;
                tra->next = new_node;
        }

}

void display(Node **href){
        Node * tra = new Node();
        tra = *href;
        if(tra == NULL) {
                cout<<"\n Linked List is empty";
                return;
        }
        else {
                cout<<"\n";
                while(tra!= NULL) {
                        cout<<"\t"<<tra->data;
                        tra= tra->next;
                }
        }
}

int main(){
        cout<<"\n Enter the number of elements to be pushed into LL :";
        int n;
        cin>>n;
        cout<<"\n Enter the numbers :";
        int value;
        while(n>0) {
                cin>> value;
                push(&head,value);
                n--;
        }
        display(&head);
}
