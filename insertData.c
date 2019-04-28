#include "linked_list.h"

Node insertData(Node current, int newData, char *method, int judge) {
	Node n_data = (Node)malloc(sizeof(Node));
	if(n_data == NULL)
		return current;

	n_data->data = newData;

	if(strcmp(method, "head") == 0)
		n_data->next = current;
	else if(strcmp(method, "inside") == 0) {
		//Node newHead = current;

		while(current != NULL) {
			if(current->data == judge) {
				n_data->next = current->next;
				current->next = n_data;

				return 0;
				//return newHead;
			}
			current = current->next;
		}
	} else if(strcmp(method, "tail") == 0) {
		//Node newHead = current;

		while(current != NULL) {
			if(current->next == NULL) {
				n_data->next = NULL;
				current->next = n_data;

				//return newHead;
				return current;
			}
			current = current->next;
		}
	}
}
