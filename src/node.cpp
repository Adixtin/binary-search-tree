#include "node.h"

Node::Node(int value){
	data = value;
	right = nullptr;
	left = nullptr;
}

void Node::insertNode(int value){

	Node* node = new Node(value);

	if(this->data > node->data){
		if(this->left != nullptr){
			this->left->insertNode(value);
		}
		else this->left = node;

	}
	else if(this->data < node->data){
		if(this->right != nullptr){
			this->right->insertNode(value);
		}
		else{this->right = node;}
	}


}

