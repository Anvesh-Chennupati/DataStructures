#include <iostream>

using namespace std;

struct node {
        int data;
        struct node *next;
} head;

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
        while(head!=NULL) {
                cout<<head->data<<"\t";
                head = head->next;
        }
        return 0;
}
