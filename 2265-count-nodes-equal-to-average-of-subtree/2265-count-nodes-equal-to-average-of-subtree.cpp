class Solution {
public:
    pair<int, int> trav(TreeNode* root, int& count) {
        if(root == nullptr) return {0, 0};

        auto [leftSum, leftCount] = trav(root->left, count);
        auto [rightSum, rightCount] = trav(root->right, count);

        int subtreeSum = leftSum + rightSum + root->val;
        int subtreeCount = leftCount + rightCount + 1;

        if(subtreeSum / subtreeCount == root->val) count++;

        return {subtreeSum, subtreeCount};
    }

    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        trav(root, count);
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna