#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) return true;
    if (p == nullptr || q == nullptr) return false;
    if (p->val != q->val) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

TreeNode* invertTree(TreeNode* root) {
    if (root == nullptr) return root;
    TreeNode* left = invertTree(root->left);
    TreeNode* right = invertTree(root->right);
    root->left = right;
    root->right = left;
    return root;
}

int maxDepth(TreeNode* root) {
    if (root == nullptr) return 0;
    else return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}


int diameterOfBinaryTree(TreeNode* root) {
    if (root == nullptr) return 0;
    return maxDepth(root->left) + maxDepth(root->right);
}

TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    TreeNode* newNode = nullptr;
    if (root1 == nullptr && root2 == nullptr) 
        newNode = nullptr;
    else if (root1 != nullptr && root2 == nullptr) 
        newNode = new TreeNode(root1->val, root1->left, root1->right);
    else if (root1 == nullptr && root2 != nullptr) 
        newNode = new TreeNode(root2->val, root2->left, root2->right);
    else {
        newNode = new TreeNode(root1->val + root2->val);
        newNode->left = mergeTrees(root1->left, root2->left);
        newNode->right = mergeTrees(root1->right, root2->right);
    }
    return newNode;
}