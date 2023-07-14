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



