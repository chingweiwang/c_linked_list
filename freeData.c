#include "linked_list.h"

void freeData(Node current) {
	Node tmp = NULL;

	while(current != NULL) {
		tmp = current;
		current = current->next;
		free(tmp);
	}
}
