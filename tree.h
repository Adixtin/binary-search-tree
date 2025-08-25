#pragma once

#include <vector>
#include "node.h"

class Tree{
	public:
		std::vector<int> tree;
		int root;
	Tree(std::vector<int> array);

//	std::vector<Node*> createNodeVector(std::vector<int> tree);
	Node* buildTree();
	Node* findNode(int value, Node* node);
	Node* deleteNode(int value, Node* root);
	Node* maxValueNode(Node* node);
	void printTree(Node* root, int space = 0, int indent = 5);
};
