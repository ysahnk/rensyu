#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *insert(struct Node *root, int data) {
	struct Node *temp = NULL;
	if (root == NULL) {
		temp = malloc(sizeof(struct Node));
		temp->data = data;
		temp->left = temp->right = NULL;
	} else {
		temp = root;
		if (data < root->data) {
			root->left = insert(root->left, data);
		} else if (data > root->data) {
			root->right = insert(root->right, data);
		} else {
			printf("input data %d is already exist\n", data);
		}
	}
	return temp;
}

void inordertraverse(struct Node *root) {
	if (root == NULL) {
		return;
	}
	inordertraverse(root->left);
	printf("this is the node %d\n", root->data);
	inordertraverse(root->right);
}

int main() {
	struct Node *root = malloc(sizeof(struct Node));
	root->data = 5;
	root->left = root->right = NULL;

	insert(root, 3);
	insert(root, 7);
	insert(root, 2);
	insert(root, 4);
	insert(root, 6);
	insert(root, 8);
	insert(root, 5);

	inordertraverse(root);
}
