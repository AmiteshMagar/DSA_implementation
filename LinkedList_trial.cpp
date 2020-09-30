#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Node{
    public:
    Node* prev;
    string data;
    Node* next;
};

int main(){
    
    Node * head=NULL;
    Node* second = NULL;
    Node* third = NULL;
    
    head= new Node();
    second = new Node();
    third = new Node();
    
    //allocation
    
    head->prev= NULL;
    head->data = "The first sentence \n";
    head->next = second;
    
    second->prev= head;
    second->data = "The second sentence \n";
    second->next = third;
    
    third->prev= second;
    third->data = "The third sentence \n";
    third->next = NULL;
    
    Node* node = NULL;
    node = new Node();
    node->next = head;
    
    for(int i =0; i< 3 ; i++){
        cout << (node->next->data);
        node->next = node->next->next;
    }
    return 0;
    
}

