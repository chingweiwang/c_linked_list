#include "linked_list.h"

Node combinedData(Node current, Node newCurrent) {
	Node newHead = current;

	while(current != NULL) {
		if(current->next == NULL) {
			current->next = newCurrent;

			return newHead;
		}
		current = current->next;
	}
}
