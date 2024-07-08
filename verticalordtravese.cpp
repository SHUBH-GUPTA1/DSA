// Vertical Traversal of Binary Tree
// MediumAccuracy: 32.87%Submissions: 161K+Points: 4
// Win from a prize pool of INR 15K and get exciting merch! Register your team for Hack-A-Thon today!

// Given a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
// If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.

// Example 1:

// Input:
//            1
//          /   \
//        2       3
//      /   \   /   \
//    4      5 6      7
//               \      \
//                8      9           
// Output: 
// 4 2 1 5 6 3 8 7 9 
// Explanation:

// Example 2:

// Input:
//        1
//     /    \
//    2       3
//  /    \      \
// 4      5      6
// Output: 4 2 1 5 3 6
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function verticalOrder() which takes the root node as input parameter and returns an array containing the vertical order traversal of the tree from the leftmost to the rightmost level. If 2 nodes lie in the same vertical level, they should be printed in the order they appear in the level order traversal of the tree.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)


vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,map<int,vector<int>>>nodes;      //hd->levelnodes(map(level->nodes))
        queue<pair<Node*,pair<int,int>>>q;      //queue(Node*,pair(hd,level))
        vector<int>ans;
        
        if(root==NULL)
        return ans;
        
        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty()){
            pair<Node*,pair<int,int>>temp=q.front();
            q.pop();
            Node* frontNode=temp.first;
            int hd=temp.second.first;
            int lvl=temp.second.second;
            nodes[hd][lvl].push_back(frontNode->data);
            
            if(frontNode->left)
            q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
            
            if(frontNode->right)
            q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
        }
        for(auto i:nodes){
            for(auto j:i.second){
                for(auto k:j.second){     //i.second.second me ans vector hai 
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }