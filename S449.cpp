#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

namespace S449 {


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Codec {


    void helper(TreeNode *root, string& ret) {
        if (root) {
            ret += to_string(root->val);
            ret += "{";
            helper(root->left, ret);
            ret += ",";
            helper(root->right, ret);
            ret += "}";
        }
    }

public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res = "";
        helper(root, res);
        return res;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.size() == 0) return NULL;

        if ('0'<=data[0] && data[0]<='9') {
            int start = data.find_first_of('{');
            int end = data.find_last_of('}');

            int coma = start+1;
            int balance = 0;

            for ( ;coma < end; coma++) {
                if (data[coma] == '{') balance++;
                else if (data[coma] == '}') balance--;
                else if (balance==0 && data[coma]==',') break;
            }


            int v = atoi(data.c_str());
            auto res = new TreeNode(v);

            res->left = coma-start-1 > 0 ? deserialize(data.substr(start+1, coma-start-1)) : NULL;
            res->right = end-coma-1>0 ? deserialize(data.substr(coma+1, end-coma-1)) : NULL;
            return res;

        }
        return NULL;
    }
};

int main(int argc, char *argv[]) {

    TreeNode n1(10);
    TreeNode n21(5), n22(12);
    TreeNode n31(2), n32(6), n33(8), n34(14);

    n1.left = &n21, n1.right = &n22;
    n21.left = &n31, n21.right = &n32;
    n22.left = &n33, n22.right = &n34;


    Codec co;

    auto res = co.serialize(&n1);
    cout << res << endl;

    co.deserialize(res);
    return 0;
}

};
