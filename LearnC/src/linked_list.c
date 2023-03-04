/*
 * linked-list.c
 *
 *  Created on: 2023年2月12日
 *      Author: Crist
 */
#include <stdio.h>
#include <stdlib.h>  //包含malloc函数的声明
#include "linked_list.h"

//向链表末尾添加结点
void add(List *plist,int number){
	//申请一个Node变量的内存空间,返回Node变量的地址
	Node *n=(Node*)malloc(sizeof(Node));
	n->data=number;
	n->next=NULL;
	if (plist->head == NULL) {
	    plist->head = n;
	    } else {
	    	Node* p = plist->head;
	        while (p->next != NULL) {
	            p = p->next;
	        }
	        p->next = n;
	    }
}

//遍历链表所有节点
void traverse(List* plist) {
    Node* p = plist->head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void linked_list(){
	//实例化一个链表
	List list;
	int number;

	while (number != -1){
	   scanf("%d", &number);
	   add(&list, number);//此处链表以-1做尾值
	}

	traverse(&list);
}

