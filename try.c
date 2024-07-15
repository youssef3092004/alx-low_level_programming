#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void InsertAtEnd(int NewData) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = NewData;
    newNode->prev = tail;
    newNode ->next = NULL;

    if (tail != NULL) {
        tail->next = newNode;
    }
    tail = newNode;

    if (head == NULL) {
        head = tail;
    }
}

void InsertAtStart(int NewData) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = NewData;
    newNode->prev = NULL;
    newNode->next = head;
    if (head!= NULL) {
        head->prev = newNode;
    }
    head = newNode;
    if (head == NULL) {
        head = tail;
    }
}

void InsertByPosition(int pos, int NewData) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *curr = head;
    newNode->data = NewData;
    if (pos == 0)
        InsertAtStart(NewData);
    else {
        for (int i = 0; i < pos; i++)
            curr = curr->next;
        newNode->next = curr->next;
        newNode->prev = curr;
        curr->next = newNode;
        newNode->next->prev = newNode;
    }
}

void RemoveFirst() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *curr = head;
    head = curr->next;
    if (head!= NULL) {
        head->prev = NULL;
    }
    free(curr);
}

void RemoveLast() {
    if (tail == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *curr = tail;
    tail = curr->prev;
    if (tail!= NULL) {
        tail->next = NULL;
    }
    free(curr);
}

void RemoveByPosition(int pos) {
    struct Node *curr = head;
    for (int i = 0; i < pos; i++)
        curr = curr->next;
    struct Node *temp = curr->next;

}

