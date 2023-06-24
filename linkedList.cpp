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

Node* reverse(Node* root,int k,int &n){
    if(root == NULL){
        return NULL;
    }
    Node* curr = root;
    Node* prev = NULL;
    Node* forward = NULL;
    int count = 0;
    while(curr != NULL && count < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    n -= k;
    if(k<=n){
        root -> next = reverse(forward,k,n);
    }
    else{
        root -> next = forward;
    }
    return prev;
}
int main(){
    Node* root = new Node(1);
    create(root);
    int l = 5;
    Node* ans = reverse(root,2,l);
    Node* curr = ans;
    while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}
//adhiraj chuhan