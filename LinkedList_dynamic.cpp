#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    string data;
    Node* next;
};

int main(){
    int limit = 0;
    cin >> "Enter the number of nodes \n" >> limit;
    
    Node* ptr = NULL;
    Node* head = NULL;
    
    head = new Node();
    ptr = head;
    for(int i=0; i<limit; i++){
        cin >> "Enter data: ">> ptr ->data >> "\n";
        ptr ->next = new Node();
        ptr = ptr->next;
    }
    cin >> "Enter data: ">> ptr->data >> "\n";
    ptr->next = NULL;
    
}
