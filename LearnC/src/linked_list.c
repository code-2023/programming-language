/*
 * linked-list.c
 *
 *  Created on: 2023��2��12��
 *      Author: Crist
 */
#include <stdio.h>
#include <stdlib.h>  //����malloc����������
#include "linked_list.h"

//������ĩβ��ӽ��
void add(List *plist,int number){
	//����һ��Node�������ڴ�ռ�,����Node�����ĵ�ַ
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

//�����������нڵ�
void traverse(List* plist) {
    Node* p = plist->head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void linked_list(){
	//ʵ����һ������
	List list;
	int number;

	while (number != -1){
	   scanf("%d", &number);
	   add(&list, number);//�˴�������-1��βֵ
	}

	traverse(&list);
}

