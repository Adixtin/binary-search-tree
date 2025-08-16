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

	for(size_t i = 1;i < this->tree.size(); i++){
		root->insertNode(this->tree[i]);
	}

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
