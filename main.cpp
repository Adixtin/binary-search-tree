#include "node.h"
#include <iostream>

int main(){
	Node node1(20);
	Node node2(10);

	int a = node1.comparing(node2);

	std::cout << a;

	return 0;
};

