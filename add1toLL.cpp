// A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

// Example 1:

// Input:
// LinkedList: 4->5->6
// Output: 457 
// Example 2:

// Input:
// LinkedList: 1->2->3
// Output: 124 
// Your Task:
// Your task is to complete the function addOne() which takes the head of the linked list as the only argument and returns the head of the modified linked list. The driver code prints the number.
// Note: The head represents the left-most digit of the number.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).



class Solution
{
    private:
    Node* reverse(Node* head){
        Node* cur=head;
        Node* next=NULL;
        Node* prev=NULL;
        
        while(cur!=NULL){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        bool f=true;
        Node*cur=head;
        while(cur!=NULL && f==true){
            if(cur->next==NULL && cur->data==9){                           //99+1=100
                cur->data=1;
                Node* temp=new Node(0);
                temp->next=head;
                head=temp;
                cur=cur->next;
            }
            else if(cur->data==9){                                      //29+1=30
                cur->data=0;
                cur=cur->next;
            }
            else{                                                       //23+1=24
                cur->data=cur->data+1;
                cur=cur->next;
                f=false;
            }
        }
        head=reverse(head);
        return head;
    }
};