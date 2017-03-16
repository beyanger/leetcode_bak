
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <deque>
#include <vector>
#include <list>


using namespace std;


namespace S113 {
struct UndirectedGraphNode {
	int label;
	vector<UndirectedGraphNode *> neighbors;
	UndirectedGraphNode(int x) : label(x) {};
};

class Solution {

private:
	void dfs(UndirectedGraphNode *node, unordered_map<UndirectedGraphNode *, UndirectedGraphNode *>& o2n) {
		if (!node) return;	

		if (!o2n[node]) o2n[node] = new UndirectedGraphNode(node->label);

		auto newV = o2n[node];

		for (auto x : node->neighbors) {
			if (x == NULL) newV->neighbors.push_back(NULL);
			if (o2n[x] == NULL) dfs(x, o2n);
			newV->neighbors.push_back(o2n[x]);
		}
	} 

public:
	UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
		unordered_map<UndirectedGraphNode *, UndirectedGraphNode *> old2new;
		dfs(node, old2new);
		return old2new[node];
	}
};




int main(int argc, char *argv[]) {
	Solution so;

	return 0;
}



};
