#include <cstdio>
#include <iostream>
#include <vector>

#include "tree.h"
#include "node.h"

Tree::Tree(std::vector<int> array){
	tree = array;

}
/*
std::vector<Node*> Tree::createNodeVector(std::vector<int> tree){
	std::vector<Node*> nodeVector;
	for (int value : tree){
		nodeVector.push_back(new Node(value));
	}

	return nodeVector;
}
*/


Node* Tree::buildTree(){
	Node* root = new Node(this->tree[0]);

	for(size_t i = 1;i < this->tree.size();root->insertNode(this->tree[i++]))
		;

	return root;
}

Node* Tree::findNode(int value, Node* node){
	if(node == nullptr || node->data == value){
		return node;
	}

	if(value > node->data){
		return findNode(value, node->right);
	}
	else{
		return findNode(value,node->left);
	}

}

Node* Tree::deleteNode(int value, Node* node){
	if (node == nullptr) return node;

	if (value < node->data){
		node->left = deleteNode(value, node->left);
	}
	else if (value > node->data){
		node->right = deleteNode(value, node->right);
	}
	else{
		if(node->left == nullptr){
			Node* temp = node->right;
			delete node;
			return temp;
		}

		else if(node->right == nullptr){
			Node* temp = node->left;
			delete node;
			return temp;
		}

		Node* predecessor = maxValueNode(node->left);
		node->data = predecessor->data;
		node->left = deleteNode(predecessor->data, node->left);
	}
	return node;

}

Node* Tree::maxValueNode(Node* node){
	Node* current = node;
	while(current && current->right != nullptr){
		current = current->right;
	}
	return current;
}

void Tree::printTree(Node* root, int space, int indent){
	if(root == nullptr) return;

	space += indent;

	printTree(root->right, space);

	std::cout << std::endl;
	for(int i = indent; i < space; i++) std::cout << " ";
	std::cout << root->data <<  "\n";

	printTree(root->left, space);
}
