#include <stdio.h>
#include <stdlib.h>
#include "queueS.h"

// ���� ���� ť�� �����ϴ� ����
QueueType* createQueue() {
	QueueType* Q;
	Q = (QueueType*)malloc(sizeof(QueueType));
	Q->front = -1;
	Q->rear = -1;
	return Q;
}

// ���� ť�� ���� �������� �˻��ϴ� ����
int isQueueEmpty(QueueType* Q) {
	if (Q->front == Q->rear) {
		printf(" Queue is empty! \n\t");
		return 1;
	}
	else return 0;
}

// ���� ť�� ��ȭ �������� �˻��ϴ� ����
int isQueueFull(QueueType* Q) {
	if (Q->rear == Q_SIZE - 1) {
		printf(" Queue if full! \n\t");
		return 1;
	}
	else return 0;
}

void enQueue(QueueType* Q, element item) {
	if (isQueueFull(Q)) return;
	else {
		Q->rear++;
		Q->queue[Q->rear] = item;
	}
}

element deQueue(QueueType* Q) {
	if (isQueueEmpty(Q)) return;
	else {
		Q->front++;
		return Q->queue[Q->front];
	}
}

element peekQ(QueueType* Q) {
	if (isQueueEmpty(Q)) return;
	else return Q->queue[Q->front + 1];
}

void printQ(QueueType* Q) {
	int i;
	printf(" Queue : [");
	for (i = Q->front + 1; i <= Q->rear; i++)
		printf("%3c", Q->queue[i]);
	printf(" ]");
}

