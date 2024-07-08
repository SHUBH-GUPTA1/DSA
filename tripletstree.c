#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    int count;
    int size;
    struct Node* left;
    struct Node* right;
};

typedef struct Node Node;

Node* createNode(int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->value = value;
    newNode->count = 1;
    newNode->size = 1;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insert(Node** root, int value, int* count, Node** prev, Node** next) {
    if (*root == NULL) {
        *root = createNode(value);
        if (*prev != NULL && (*prev)->value < value && (*next) == NULL) {
            *next = *root;
        }
        if (*next != NULL && (*next)->value > value) {
            printf("(%d,%d,%d)\n", (*prev)->value, value, (*next)->value);
        }
        return;
    }
    if ((*root)->value == value) {
        (*root)->count++;
        (*count) += (*root)->size - (*root)->count;
        return;
    }
    if (value < (*root)->value) {
        (*root)->size++;
        if ((*prev) != NULL && (*prev)->value < value && (*next) == NULL) {
            *next = *root;
        }
        insert(&((*root)->left), value, count, prev, next);
    } else {
        (*root)->size++;
        (*count) += (*root)->size - 1 - (*root)->count;
        if ((*next) != NULL && (*next)->value > value) {
            printf("(%d,%d,%d)\n", (*prev)->value, value, (*next)->value);
        }
        insert(&((*root)->right), value, count, prev, next);
    }
}

int countAscendingTriplets(int d[], int n) {
    Node* root = NULL;
    Node* prev = NULL;
    Node* next = NULL;
    int count = 0;
    for (int i = 0; i < n; i++) {
        insert(&root, d[i], &count, &prev, &next);
        if (root != NULL && root->left == NULL && root->right == NULL) {
            prev = root;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int d[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &d[i]);
    }
    int count = countAscendingTriplets(d, n);
    printf("Total count: %d\n", count);
    return 0;
}
