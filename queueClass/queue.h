#pragma once
#include <iostream>
// sweeney's hand-rolled queue class.

// doubly linked list node.
struct dNode
{
	int data;
	dNode* next = nullptr;
	dNode* prev = nullptr;
};

class queue
{
public:
	int push(dNode** list, int data);
	int pop(dNode** list);
	int front(dNode* list, int &data);
	int back(dNode* list, int &data);
	int clear(dNode** list);
	int isEmpty(dNode* list);
	int size(dNode* list, int &nodeCount);
	int print(dNode* list);
};

