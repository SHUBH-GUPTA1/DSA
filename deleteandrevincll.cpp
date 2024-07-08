// Given a Circular Linked List of size N. The task is to delete the given node (excluding the first and last node) in the circular linked list and then print the reverse of the circular linked list.

 

// Example 1:


// Input:
// 5
// 2 5 7 8 10
// 8

// Output:
// 10 7 5 2
// Explanation: 
// After deleting 8 from the given circular linked 
// list, it has elements as 2, 5, 7, 10. Now, 
// reversing this list will result in 10, 7, 5, 2.
 

// Example 2:

// Input:
// 4
// 1 7 8 10
// 8

// Output:
// 10 7 1

// Explanation:
// After deleting 8 from the given circular linked 
// list, it has elements as 1, 7,10. Now, reversing 
// this list will result in 10, 7, 1.
 

// Your Task:
// You don't need to read, input, or print anything. Your task is to complete the function deleteNode( ), which takes Node head, and integer key as input parameters, and delete the node with data key. Also Complete function reverse() which reverses the linked list.


struct Node
{
	int data;
	struct Node *next;
};

void deleteNode(struct Node **head, int key)
{

// Your code goes here

Node* cur=*head;
Node* prev=NULL;

while(cur->data!=key){
    prev=cur;
    cur=cur->next;
}
prev->next=cur->next;
return;
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{

// Your code goes here
Node* head=*head_ref;
Node* cur=head->next;
Node* prev=head;
while(cur!=head){
    Node* temp=cur->next;
    cur->next=prev;
    prev=cur;
    cur=temp;
}
cur->next=prev;
*head_ref=prev;

}