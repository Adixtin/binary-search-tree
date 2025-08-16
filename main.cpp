#include <vector>
#include "node.h"
#include "tree.h"
#include <iostream>

int main(){
	

	Node node1(20);
	Node node2(10);


	std::vector<int> intVector = {7,19,4,12,6};

	Tree tree(intVector);
	

	Node* root = (tree.buildTree());

	Node* locatedNode = (tree.findNode(12, root));

	std::cout << root->left->right->data << "\n";
	std::cout << root->data << "\n";
	std::cout << locatedNode->data << "\n";

	return 0;
};

