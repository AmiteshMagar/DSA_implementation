#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    string data;
    Node* next;
};

int main(){
    int limit = 0;
    cout << "Enter the number of terms \n";
    cin >> limit;
    
    Node* ptr = NULL;
    Node* head = NULL;
    
    head = new Node();
    ptr = head;
    cout << "Enter the values \n";
        cin >> ptr->data;
    for(int i=0; i<limit -1; i++){
        ptr->next = new Node();
        ptr = ptr->next;
        cout << "Enter the values \n";
        cin >> ptr->data;
    }
    ptr->next = NULL;
    
    Node* node = NULL;
    node = new Node();
    node->next = head;

    while(node->next != NULL){
        cout << (node->next->data) << "\n";
        node->next = node->next->next;
    }

    return 0;
}
