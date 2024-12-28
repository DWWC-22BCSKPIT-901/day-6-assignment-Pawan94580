 Q5. Binary Tree- Sum of All Nodes

 #include <iostream>
 #include <queue>
 using namespace std;
 class Solution {
 public:
 int sumOfNodes(TreeNode* root) {
 if (!root) return 0;
 queue<TreeNode*> q;
 q.push(root);
 int totalSum = 0;
 while (!q.empty()) {
 TreeNode* node = q.front();
 q.pop();
 totalSum += node->val; 
 if (node->left) q.push(node->left); 
 if (node->right) q.push(node->right);
 }
 return totalSum;
 }
 };
 int main() {
 TreeNode* root = new TreeNode(1);
 root->left = new TreeNode(2);
 root->right = new TreeNode(3);
 root->left->left = new TreeNode(4);
 root->left->right = new TreeNode(5);
 root->right->right = new TreeNode(6);
 Solution sol;
 cout << "Sum of All Nodes: " << sol.sumOfNodes(root) << endl; 

 }
 return 0;
