Given the root of a binary tree, return the inorder traversal of its nodes' values.
 Code:
#include <iostream>
 #include <vector>
 using namespace std;
 // Definition for a binary tree node.
 struct TreeNode {
 int val;
 TreeNode* left;
 TreeNode* right;
 TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 };
 class Solution {
 public:
 vector<int> inorderTraversal(TreeNode* root) {
 vector<int> result;
 inorder(root, result);
 return result;
 }
 private:
 void inorder(TreeNode* node, vector<int>& result) {
 if (!node) return;
 inorder(node->left, result); // Traverse the left subtree
 result.push_back(node->val); // Visit the root
 inorder(node->right, result); // Traverse the right subtree
 }
 };
