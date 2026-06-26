class Codec {
public:
    void solve(TreeNode* root, string &s) {
        if (root == NULL) {
            s += "N,";
            return;
        }

        s += to_string(root->val) + ",";

        solve(root->left, s);
        solve(root->right, s);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";
        solve(root, s);
        return s;    
    }

    TreeNode* build(string &data, int &i) {

        if (i >= data.size())
            return NULL;

        if (data[i] == 'N') {
            i += 2;         
            return NULL;
        }

        string num = "";

        while (i < data.size() && data[i] != ',') {
            num += data[i];
            i++;
        }

        i++;                

        TreeNode* root = new TreeNode(stoi(num));

        root->left = build(data, i);
        root->right = build(data, i);

        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int i = 0;
        return build(data, i);   
    }
};