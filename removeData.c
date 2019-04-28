#include "linked_list.h"

Node removeData(Node current, char *method, int removedData) {

	if(strcmp(method, "head") == 0) {
		Node newHead = current->next;
		free(current);

		return newHead;
	} else if(strcmp(method, "inside") == 0) {
		Node previous = NULL;

		while(current != NULL) {
			if(current->data == removedData) {
				previous->next = current->next;
				free(current);
			} else
				previous = current;

			current = current->next;
		}
	} else if(strcmp(method, "tail") == 0) {
		Node previous = NULL;

		while(current != NULL) {
			if(current->next == NULL) {
				previous->next = NULL;
				free(current);
			} else
				previous = current;

			current = current->next;
		}
	}
}
