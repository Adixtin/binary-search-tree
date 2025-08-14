#include "node.h"


int data;
Node* right;
Node* left;

Node::Node(int value){
	data = value;
	right = nullptr;
	left = nullptr;
}

void Node::comparing(Node node){
	if(this->data > node.data){
		if(this->left != nullptr){
			this->left->comparing(node);
		}
		else{this->left = &node;}

	}
	else if(this->data < node.data){
		if(this->right != nullptr){
			this->right->comparing(node);
		}
		else{this->right = &node;}
	}


}
