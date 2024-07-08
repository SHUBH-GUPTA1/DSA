// Given a binary tree and the task is to find the spiral order traversal of the tree.

// Spiral order Traversal mean: Starting from level 0 for root node, for all the even levels we print the node's value from right to left and for all the odd levels we print the node's value from left to right. 

// For below tree, function should return 1, 2, 3, 4, 5, 6, 7.


 
 

// Example 1:

// Input:
//       1
//     /   \
//    3     2
// Output:1 3 2

// Example 2:

// Input:
//            10
//          /     \
//         20     30
//       /    \
//     40     60
// Output: 10 20 30 60 40 
// Your Task:
// The task is to complete the function findSpiral() which takes root node as input parameter and returns the elements in spiral form of level order traversal as a list. The newline is automatically appended by the driver code.
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).




vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int>ans;
    queue<Node*>q;
    if(root==NULL)return ans;
    q.push(root);
    int f=0;
    while(!q.empty()){
        vector<int>temp;
        int size=q.size();
        while(size--){
            Node* t=q.front();
            temp.push_back(t->data);
            q.pop();
            if(t->left!=NULL)q.push(t->left);
            if(t->right!=NULL)q.push(t->right);
        }
        if(f%2==0)reverse(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)ans.push_back(temp[i]);
        f=!f;
    }
    return ans;
}