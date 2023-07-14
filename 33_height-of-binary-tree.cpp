#include <iostream>
#include <algorithm>

using namespace std;

// Definition of a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
//write code
    int height(Node* node) {
        if (node == NULL) {
            return 0;
        }

        int left = height(node->left);
        int right = height(node->right);

        int ans = max(left, right) + 1;

        return ans;
    }
};

int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution obj;
    int treeHeight = obj.height(root);
    cout << "Height of the binary tree: " << treeHeight << endl;

    // Deallocating memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
