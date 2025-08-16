#include "node.h"

Node::Node(int value){
	data = value;
	right = nullptr;
	left = nullptr;
}

void Node::insertNode(Node* node){
	if(this->data > node->data){
		if(this->left != nullptr){
			this->left->insertNode(node);
		}
		else{this->left = node;}

	}
	else if(this->data < node->data){
		if(this->right != nullptr){
			this->right->insertNode(node);
		}
		else{this->right = node;}
	}


}
