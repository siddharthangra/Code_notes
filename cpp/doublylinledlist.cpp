#include<bits/stdc++.h>
using namespace std;

//unlike normal linkedlist in double linkelist we can move in backward directon as well

class node{
    public:
    int data;
    node* next;
    node* back;

    public:
    node(int data1, node* next1 , node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

node* changeArr2DLL( vector<int> &arr){
    node* head = new node(arr[0]);
    node* prev = head;

    for(int i = 1; i< arr.size(); i++){
        node* temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

//deleting head of DLL
node* delete_head_DLL(node* start_point){
    if(start_point == NULL || start_point->next == NULL){
        return NULL;
    }

    node* temp = start_point;
    start_point = start_point->next;
    start_point->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return start_point;
}

//deleting tail of DLL
node* delete_tail_DLL(node* start_point){
    if(start_point == NULL || start_point->next == NULL){
        return NULL;
    }

    node* temp = start_point;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    node* temp2 = temp->next;
    temp->next = nullptr;
    temp2->back = nullptr;
    delete temp2;
    return start_point;
}

//deleting the kth element
node* delete_kth_DLL( node* head, int k){
    node* temp = head;
    int count = 1;
    while(count <= k){
        temp = temp->next;
    }
    node* prev = temp->back;
    node* front = temp->next;

    if( prev == NULL || front == NULL ){
        delete temp;
        return NULL;
    }
    else if(prev == NULL){
        delete_head_DLL( temp);
    }
    else if( front == NULL){
        delete_tail_DLL(temp);
    }

    prev->next = temp->next;
    front->back = temp->back;
    temp->next= nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}

//inserting an element before the head
node* insert_before_head(int el, node* head){
    node* new_el = new node(el);
    node* temp = head; 
    new_el->next = temp;
    head->back = new_el;
    
    return new_el;
}
//inserting element before the tail
node* insert_before_tail(int el, node* head){
    node* new_el = new node(el);
    node* temp = head;

    while(temp->next != NULL){
        temp= temp->next;
    }

    new_el->next = temp;
    new_el->back = temp->back;
    node* prev = temp->back;
    prev->next = new_el;
    temp->back = new_el;
}


// Reversing a DLL
// Brute forch approach 
node* reverseDLL(node* head){
    node* temp = head;
    while(temp->next != NULL){
        
    }
}
int main(){
    vector<int> arr = {2,3,5,1};
    node* start_point = changeArr2DLL(arr);
    cout << start_point->data << endl;

    //traveersing the DLL
    node* temp = start_point;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}