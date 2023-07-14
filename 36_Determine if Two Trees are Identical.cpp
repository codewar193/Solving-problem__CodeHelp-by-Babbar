class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        
        //Base Case 
         if(r1 == NULL && r2 == NULL) return true;
       if((r1 && r2 == NULL) || (r1 == NULL && r2)) return false;
       
       bool left = isIdentical(r1 -> left , r2 -> left);
       bool right = isIdentical(r1 -> right , r2 -> right);
       
       bool op3 = r1 -> data == r2 -> data ;
        return (left && right && op3)?true:false;
       
    }
};
