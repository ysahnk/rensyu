#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

int append(struct Node **head, int data) {
	struct Node *temp = *head;
	if (temp == NULL) {
		//*head = malloc(sizeof(struct Node));
		//(*head)->data = data;
		//(*head)->next = NULL;
		temp = malloc(sizeof(struct Node));
		temp->data = data;
		temp->next = NULL;
		*head = temp;
		return 0;
	} else {
		while (temp->next) {
			temp = temp->next;
		}
		temp->next = malloc(sizeof(struct Node));
		temp->next->data = data;
		temp->next->next = NULL;
		return 0;
	}
}

int main() {
	struct Node *head = NULL;

	for (int i = 1; i < 11; i++) {
		append(&head, i);
	}

	while (head) {
		printf("node %d:\t", head->data);
		head = head->next;
	}

	return 0;
}
