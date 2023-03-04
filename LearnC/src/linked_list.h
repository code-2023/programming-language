/*
 * linked-list.h
 *
 *  Created on: 2023年3月4日
 *      Author: Crist
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

//声明链表结点的结构并定义新类型Node
typedef struct node{
	int data;
	struct node *next;
}Node;
//声明存储链表信息的结构体
typedef struct list{
	Node *head;
}List;

#endif /* LINKED_LIST_H_ */

void add(List *plist,int number);
void traverse(List* plist);
void linked_list();


