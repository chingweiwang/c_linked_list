#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	int data;
	struct node *next;
};
typedef struct node *Node;

void printData(Node current);
void freeData(Node current);
Node insertData(Node current, int newData, char *method, int judge);
Node removeData(Node current, char *method, int removedData);
Node invertData(Node current);
