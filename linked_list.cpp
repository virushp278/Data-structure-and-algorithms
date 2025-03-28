#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    //new node created
    Node* temp = new Node(d);
    temp-> next= head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void insertAtPosition(Node* &tail ,Node* &head,int position,int d){

    //insert at start
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while( cnt < position-1){
        temp = temp -> next;
        cnt+=1;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert; 

    //if it`s the last node
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return ;
    }

} 

void print(Node* &head){
    Node* temp = head;
    
    while( temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}



int findLen(Node* head){
    Node* temp = head;
    int count=0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}


int main(){
    //created a nnew node
    Node* node1 = new Node(10);
    cout << node1-> data <<endl;
    cout << node1-> next <<endl;
    
    //head pointed to new node
    Node* head = node1;
    Node*  tail = node1;
    
    //inserting at head
    insertAtTail(tail,12);
    print(head);
    
    //inserting at head
    insertAtTail(tail,15);
    print(head);
    
    insertAtPosition(tail,head,4,18);
    print(head);

    int len = findLen(head);
    cout << len << endl;

    return 0;

}