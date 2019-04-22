#include "linked_list.h"

void printData(Node current) {
	printf("Data: ");
	while(current != NULL) {
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}
