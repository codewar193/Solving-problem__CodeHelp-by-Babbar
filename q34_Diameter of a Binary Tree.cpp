int height  (struct Node* root){
    
    if(root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    
    int ans = max(left,right)+1;
    return ans;
}
// Function to return the diameter of a Binary Tree.
int diameter(struct Node* root) {
    // code heref
     if(root == NULL)
    {
        return 0;
    }
    int opt1 = diameter(root->left);
    int opt2 = diameter(root->right);
    int opt3 = height(root->left)+1+height(root->right);
    
    int ans = max(opt1, max(opt2,opt3));
    return ans;
 }



//method-2 O(N)

class Solution {
  public:
   pair<int,int> diameterfast(Node* root){
        
        if(root == NULL){
            
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = diameterfast(root->left);
        pair<int,int> right = diameterfast(root->right);
        
        int op1 = left.first; //diameter solution from left subtree
        int op2 = right.first; // diameter solution from right subtree
        int op3 = left.second + right.second + 1;//diameter solution from both subtree
        
        pair<int,int> ans;
        ans.first = max(op1 , max(op2,op3));
        ans.second = max(left.second , right.second)+1;
        
        return ans;
        
    }
    int diameter(Node* root) {
      
      return diameterfast(root).first;
    }
};
