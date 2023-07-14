class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root)
    {
        if(root==NULL)return 0;
        
        int left= height(root->left);
        int right = height(root->right);
        
        int ans = max(left,right)+1;
        return ans;
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        
        if(root == NULL)return true;
        
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
     
       bool diff = abs(height(root->left)-height(root->right))<=1;
        
       
        
        if(left & right & diff)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
//method-2
class Solution {
public:
    // Function to check whether a binary tree is balanced or not.
    pair<bool, int> balanceFast(Node* root)
    {
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<bool, int> left = balanceFast(root->left);
        pair<bool, int> right = balanceFast(root->right);

        bool diff = abs(left.second - right.second) <= 1;
        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1; // Update the height of the current node

        if (left.first && right.first && diff)
        {
            ans.first = true;
        }
        else {
            ans.first = false;
        }
        return ans;
    }

    bool isBalanced(Node* root)
    {
        // Your Code here
        return balanceFast(root).first;
    }
};
