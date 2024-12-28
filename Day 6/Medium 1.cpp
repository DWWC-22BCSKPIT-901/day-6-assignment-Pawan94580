 Q2. Count Complete Tree Nodes

 #include <iostream>
 #include <cmath>
 using namespace std;
 struct TreeNode {
 int val;
 TreeNode* left;
 TreeNode* right;
 TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 };
 class Solution {
 public:
 int countNodes(TreeNode* root) {
 if (!root) return 0;
 int leftHeight = getHeight(root->left);
 int rightHeight = getHeight(root->right);
 if (leftHeight == rightHeight) {
 return (1 << leftHeight) + countNodes(root->right);
 } else {
 return (1 << rightHeight) + countNodes(root->left);
 }
 }
 private:
 int getHeight(TreeNode* node) {
 int height = 0;
 while (node) {
 height++;
 node = node->left; 
 }
 return height;
 }
 };
