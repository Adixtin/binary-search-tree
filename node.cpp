#include "node.h"


int data;
Node* right;
Node* left;

Node::Node(int value){
	data = value;
	right = nullptr;
	left = nullptr;
}

int Node::comparing(Node node){
	if(this->data > node.data){
		return 1;
	}
	else if(this->data < node.data){
		return 2;
	}
	else{
		return 0;
	}
}
