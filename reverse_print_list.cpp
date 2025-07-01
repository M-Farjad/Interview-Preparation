#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

void printReverse(Node* head){
    if(head==NULL){
        return;
    }
    printReverse(head->next);
    cout<<  head->data<< " ";
}

int main(){ 
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n == 0) return 0;

    cout << "Enter elements: ";
    int val;
    cin >> val;
    Node* head = new Node(val);
    Node* current = head;
    
    for(int i = 1; i < n; ++i) {
        cin >> val;
        current->next = new Node(val);
        current = current->next;
    }
    cout<< "Reverse Order: ";
    printReverse(head);
}