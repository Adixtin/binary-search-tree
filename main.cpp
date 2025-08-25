#include <vector>
#include "node.h"
#include "tree.h"
#include <iostream>

int main(){
	

	Node node1(20);
	Node node2(10);


	std::vector<int> intVector = {7,19,4,12,6,10,17,120,15,1,43};

	Tree tree(intVector);
	

	Node* root = (tree.buildTree());

	int valueToDelete;

	std::cin >> valueToDelete;

	root = tree.deleteNode(valueToDelete, root);

	tree.printTree(root);
	return 0;
};

