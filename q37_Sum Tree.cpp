class Solution
{
private:
   int sumnode( Node* root){
        if(root == NULL){
            return 0;
        }
        int left = sumnode(root->left);
        int right = sumnode(root-> right);
        return (left + right + root->data);
    }

    public:
    bool isSumTree(Node* root)
    {
         // Your code here
         
       if(root == NULL){
            return true;
        }
        if(root ->left == NULL && root->right == NULL){
            return true;
        }
         
         bool left = isSumTree(root->left);
         bool right = isSumTree(root->right);
         
         int sum = sumnode(root->left) + sumnode(root->right);
        bool sumcheck = (sum == root->data);
        
        if(left && right && sumcheck){
            return true;
        }
        else
            return false;
    }
         
    
};
