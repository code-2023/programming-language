/*
 * linked-list.h
 *
 *  Created on: 2023��3��4��
 *      Author: Crist
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

//����������Ľṹ������������Node
typedef struct node{
	int data;
	struct node *next;
}Node;
//�����洢������Ϣ�Ľṹ��
typedef struct list{
	Node *head;
}List;

#endif /* LINKED_LIST_H_ */

void add(List *plist,int number);
void traverse(List* plist);
void linked_list();


