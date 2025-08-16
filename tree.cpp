#include <vector>

#include "tree.h"
#include "node.h"


Tree::Tree(std::vector<int> array){
	tree = array;

}

std::vector<Node*> Tree::createNodeVector(std::vector<int> tree){
	std::vector<Node*> nodeVector;
	for (int value : tree){
		nodeVector.push_back(new Node(value));
	}

	return nodeVector;
}


Node* Tree::buildTree(std::vector<Node*> nodeVector){
	Node* root = nodeVector[0];

	for(size_t i = 1;i < nodeVector.size(); i++){
		root->insertNode(nodeVector[i]);
	}

	return nodeVector[0];
}
