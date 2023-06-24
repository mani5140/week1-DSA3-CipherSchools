#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        next = NULL;
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

Node* reverse(Node* root){
    Node *curr = root;
    Node* prev = NULL;
    Node *forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main(){
    Node *root = new Node(1);
    create(root);
    Node* curr = reverse(root);
    while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}