#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void create(Node* root){
    Node* curr = root;
    cout << "enter the data : " << endl;
    int d;
    cin >> d;
    while(d != -1){
        Node* temp = new Node(d);
        curr -> next = temp;
        curr = temp;
        cin >> d;
    }
}

void remove(Node* root){
    Node* curr = root;
    while(curr != NULL && curr->next != NULL){
        if(curr -> data == curr->next->data){
            Node* temp = curr -> next;
            Node* nxt = temp -> next;
            temp -> next = NULL;
            delete(temp);
            curr -> next = nxt;
        }
        else{
            curr = curr -> next;
        }
    }
}


int main(){
    Node* root = new Node(1);
    create(root);
    remove(root);
    Node* curr = root;
    while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}