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
private:
    int moves = 0;

public:
    int distributeCoins(TreeNode* root) {
        postOrder(root);
        return moves;
    }

private:
    int postOrder(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int leftExcess = postOrder(root->left);
        int rightExcess = postOrder(root->right);

        moves += abs(leftExcess) + abs(rightExcess);

        return root->val + leftExcess + rightExcess - 1;
    }
};