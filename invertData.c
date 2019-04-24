#include "linked_list.h"

Node invertData(Node current) {
	Node previous = NULL;
	Node tmp = NULL;

	while(current != NULL) {
		tmp = current->next;
		current->next = previous;
		previous = current;
		current = tmp;
	}

	return previous;
}
