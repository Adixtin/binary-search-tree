#include <vector>

#include "tree.h"
#include "node.h"

std::vector<int> tree;
int root;

Tree::Tree(std::vector<int> array){
	tree = array;

}

std::vector<Node> Tree::ToNodeConverter(std::vector<int> tree){
	std::vector<Node> nodeVector;
	for (int i = 0; i < tree.size(); i++){
		Node node(tree[i]);
		nodeVector.push_back(node);
	}
	return nodeVector;
}

 Node Tree::BuildTree(std::vector<Node> tree){
	for (int i = 0; i < tree.size() - 1; i++){
		Node node1 = tree[i];
		Node node2 = tree[i+1];

		node1.comparing(node2);	
	}

	return tree[0];
}
