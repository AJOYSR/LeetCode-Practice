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
vector<int> v;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans = printInOrder(root);
        
        return ans;
        
    }
   vector<int> printInOrder( TreeNode* root)
    {
        if(root == NULL) return v;
        
        printInOrder(root->left);
        
        v.push_back(root->val);
        
        printInOrder(root->right);
       
       return v;
        
    }
};