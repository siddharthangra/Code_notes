#include<bits/stdc++.h>
using namespace std;

//LINKEDLIST BASIS
class node{
    // the information in each memory cell "node"
    public:
    int data;
    node* next;  

    // initialising node 
    public: //this ensures that I can use node in whole the code block as a datastructure
    node(int data1, node* next1){
        data = data1;
        next = next1;
    }

    public: 
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

//Converting array into linkedlist
node* convertArr2LL(vector<int> &arr){
    node* head = new node(arr[0]); //duplicate of node(arr[0])
    node* mover = head;
    for(int i =1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
// in above code we are returning the pointer head which is the memory location of our starting point, not the linked list.
/*
LET'S SEE HOW THE CODE BLOCK WORKS
1) create a pointer "head" which stores the data of starting dataset with next pointer towardss null
2) craete a pointer mover with its memory location of head
3) traverse through arr and for each new element create a new pointer temp and initiatilise it data and next pointer to be null
4) change the next pointer in mover to the current temp pointer 
5) move the mover to current temp pointer and temp  to next element of array
6) return head
*/

// LENGTH OF LINKED LIST
int lengthofLL(node* start_point){
    int cnt = 0;
    node* temp = start_point;
    while(temp){
        temp = temp->next;
        cnt ++;
    }
    return cnt;
}

// Inserting an element
node* insertel(node* &start_point){
    node* temp = new node(3);
    temp->next = start_point;
    start_point = temp;
    return start_point;
}

//DELETING ELEMENTS IN LINKEDLIST
// Deleting the head of linkedlist
node* deletehead( node* head){
    node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
// Deleting the tail of LL
node* deletetail( node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    node*temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
//Deleting the kth element of LL
node* deletekthel(node* head, int k ){
    if(head == NULL) return head;
    if (k==1){
        node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    else{
        int cnt = 0;
        node*temp = head;
        node* prev = NULL;
        while(temp != NULL){
            cnt ++;
            if(cnt == k){
                prev->next = prev->next->next;
                free(temp);
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
}
int main(){
    vector<int> arr = {0,1,2,3};
    // provding node values
    node* y = new node(arr[0], nullptr);
    cout << y << " ";
    cout << y->data << " ";
    node z = node(arr[1],nullptr);
    //cout << z; //can't print out z like this cause it's an object now 
    cout << z.data << endl;
    vector<int> hulahula = {2,5,6,7};
    node* start_point = convertArr2LL(hulahula);
    cout << start_point->data << endl;
    // TRAVERSING IN LINKEDLIST
    node* temp = start_point;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    /*
    we initialise a temp location to head, and keep on chanigng it location to next stored in current temp until it become null  i.e while(temp)
    */
   cout << endl;
   cout << lengthofLL(start_point) << endl;
   cout << insertel(start_point)->data << endl;
   cout << deletehead(start_point)->data << endl;
}