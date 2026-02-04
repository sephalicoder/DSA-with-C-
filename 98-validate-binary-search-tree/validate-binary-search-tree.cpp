/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode*prev= nullptr;
    bool isValidBST(TreeNode* root) {
        return inorder(root);
           
    }
    bool inorder(TreeNode*node){
        if(!node) return true;
        if(!inorder(node->left)) return false;
        if(prev!=nullptr && node->val<= prev->val) {
            return false;
        }
        prev= node;
       return inorder(node->right);

    }
};