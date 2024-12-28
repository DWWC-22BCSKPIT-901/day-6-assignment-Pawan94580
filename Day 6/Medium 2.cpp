 Q3. Binary Tree- Find Maximum Depth
 #include <iostream>
 #include <algorithm> 
 using namespace std;
 struct TreeNode {
 int val;
 TreeNode* left;
 TreeNode* right;
 TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 };
 class Solution {
 public:
 int maxDepth(TreeNode* root) {
 if (!root) return 0; // Base case: null node has depth 0
 int leftDepth = maxDepth(root->left);
 int rightDepth = maxDepth(root->right);
 return 1 + max(leftDepth, rightDepth);
 }
 };
