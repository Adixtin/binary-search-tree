#pragma once

#include <vector>
#include "node.h"

class Tree{
	public:
		std::vector<int> tree;
		int root;
	Tree(std::vector<int> array);

	std::vector<Node*> createNodeVector(std::vector<int> tree);
	Node* buildTree(std::vector<Node*> tree);
};
