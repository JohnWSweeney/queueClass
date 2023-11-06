#include "queue.h"

int main()
{
	std::cout << "Queue Class v1.0.1\n\n";

	dNode* list = nullptr;
	int result;
	int data;
	int nodeCount;

	queue q;

	for (int i = 0; i < 9; i++)
	{
		q.push(&list, pow(i, 5));
	}
	result = q.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		q.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
	/// test code here: ////////////////////////////////////////
	
	std::cout << "result: " << result << "\n\n";
	////////////////////////////////////////////////////////////
	result = q.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		q.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
}