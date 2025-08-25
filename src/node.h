#pragma once

class Node{
	public:
		int data;
		Node* right;
		Node* left;
	Node(int value);
	void insertNode(int value);
};

