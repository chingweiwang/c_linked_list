#include "linked_list.h"

int main()
{
	int originalData[3] = {34, 23, 13};
	int originalDataSize = sizeof(originalData) / sizeof(originalData[0]);
	int count, newData;

	Node head = NULL;
	Node current = NULL;
	Node previous = NULL;

	printf("Create an original data.\n");
	for(count = 0; count < originalDataSize; count++) {
		current = (Node)malloc(sizeof(Node));
		if(current == NULL)
			return -1;

		current->data = originalData[count];
		current->next = NULL;

		if(head == NULL)
			head = current;
		else
			previous->next = current;

		previous = current;
	}

	printData(head);
	printf("\n");

	printf("Insert a data 99 into the head of Linked List.\n");
	newData = 99;
	head = insertData(head, newData, "head", 0);

	printData(head);
	printf("\n");

	printf("Insert a data 77 into the tail of Linked List.\n");
	newData = 77;
	insertData(head, newData, "tail", 0);

	printData(head);
	printf("\n");

	printf("Insert a data 100 into Linked List and the data after 23.\n");
	newData = 100;
	insertData(head, newData, "inside", 23);

	printData(head);

	freeData(head);
}
