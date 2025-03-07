#include <stdio.h>
#include <stdlib.h>

struct Que {
	int head;
	int tail;
	int capacity;
	int *arr;
};

struct Que *createQue(int cap) {
	struct Que *temp = malloc(sizeof(struct Que));
	temp->arr = malloc(sizeof(int) * cap);
	temp->capacity = cap;
	temp->head = -1;
	temp->tail = -1;
	return temp;
}

void doubleQue(struct Que *que) {
	que->arr = realloc(que->arr, sizeof(int) * que->capacity * 2);
	int i = 0;
	for (i = 0; i < que->head; i++) {
		que->arr[que->capacity + i] = que->arr[i];	
	}
	que->tail = que->capacity + i;
	que->capacity *= 2;
	puts("queue size doubled");
}

void deleteQue(struct Que *que) {
	free(que->arr);
	free(que);
}

void enqueue(struct Que *que, int data) {
	if (que->head == -1) {
		que->head = que->tail = 0;
	}
	que->arr[que->tail] = data;
	que->tail++;
	printf("%4d is enqueued\n", data);
	if (que->tail == que->capacity) {
		que->tail = 0;
	}
	if (que->tail == que->head) {
		doubleQue(que);
	}
}

int dequeue(struct Que *que) {
	if (que->head == -1) {
		return -1;
	}
	int ret = que->arr[que->head];
	que->head++;
	if (que->head == que->capacity) {
		que->head = 0;
	}
	if (que->head == que->tail) {
		que->head = que->tail = -1;
	}
	printf("%4d is dequeued\n", ret);
	return ret;
}

int main() {
	struct Que *que = createQue(10);

	printf("%4d is dequeued\n", dequeue(que));

	for (int i = 0; i < 50; i++) {
		enqueue(que, i);
	}
	
	deleteQue(que);
	return 0;
}
