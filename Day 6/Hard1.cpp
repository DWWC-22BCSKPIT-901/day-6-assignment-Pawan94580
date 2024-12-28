 Q4. Binary Tree Preorder Traversal

 #include <iostream>
 #include <vector>
 using namespace std;
 struct TreeNode {
 int val;
 TreeNode* left;
 TreeNode* right;
 TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 };
 class Solution {
 public:
 vector<int> preorderTraversal(TreeNode* root) {
 vector<int> result;
 preorder(root, result);
 return result;
 }
 private:
 void preorder(TreeNode* node, vector<int>& result) {
 if (!node) return;
 result.push_back(node->val); 
 preorder(node->left, result); 
 preorder(node->right, result); 
 }
 };
