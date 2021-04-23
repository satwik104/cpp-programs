#include<iostream>
using namespace std;
void printIthNode(Node *head, int i) {
     int count = 0;
    Node *tail = head;
    while(tail != NULL){
        if(count == i){
            cout<< tail->data;
            return;
        }
        count++;
        tail = tail->next;
    }
    return;
    
}
