#include <iostream>

using namespace std;

struct node {
        int data;
        struct node *next;
} head;

void printReverse(struct node* revhead){
        if(revhead!=NULL)
        {
                printReverse(revhead->next);
        }
        else{
                return;
        }
        cout<<revhead->data<<"\t ";
}


int main(){
        node* head = new node();
        head = NULL;
        for(int i =0; i <10; i++) {
                struct node *new_node = new node();
                if(head == NULL) {
                        struct node *ini = new node();
                        ini->data = i;
                        ini->next = NULL;
                        head = ini;
                }
                else{
                        struct node * traversal = new node();
                        traversal = head;
                        while(traversal->next!=NULL) {
                                traversal = traversal->next;
                        }
                        new_node->data = i;
                        new_node->next = NULL;
                        traversal->next= new_node;
                }
        }
        cout<<endl;
        struct node *tra = new node();
        tra = head;
        while(tra!=NULL) {
                cout<<tra->data<<"\t";
                tra = tra->next;
        }
        cout<<"\n Printing reverse linkedlist"<<endl;
        cout<<"\n";
        printReverse(head);
        return 0;
}
