/*
 * grammar.c
 *
 *  Created on: 2023��2��10��
 *      Author: Crist
 */
#include "struct.h"

#include <stdio.h>

void enum_type(){
//	Ĭ�ϴ�0��������0,1,2,����
	enum color{RED,GREEN,BLUE};
//	enum color c=BLUE;
//	printf("%d\n",BLUE);
//	printf("%d\n",c);
//	��������һ��ö�ٱ���
	enum color c1=3;
	printf("%d\n",c1);
}

void struct_type(){
//	�ֲ�����ṹ��
	/*1.�����ṹ����*/
	struct node{
		int data;
		float time;
		char *description;
	};
	/*2.���´��������������*/
	typedef struct node node;

	node n={2023,2.14,"hello world"};
	printf("data: %d time: %f description: %s\n",n.data,n.time,n.description);
	printf("&data: %p &time: %p &description: %p\n",&(n.data),&(n.time),&(n.description));

//	һ����λ
	typedef struct date{
		int year;
		int month;
		int day;
	}date;
	date t={2023,2,10};
	printf("������%d��%d��%d��",t.year,t.month,t.day);

}
