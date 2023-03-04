/*
 * grammar.c
 *
 *  Created on: 2023年2月10日
 *      Author: Crist
 */
#include "struct.h"

#include <stdio.h>

void enum_type(){
//	默认从0递增，如0,1,2,……
	enum color{RED,GREEN,BLUE};
//	enum color c=BLUE;
//	printf("%d\n",BLUE);
//	printf("%d\n",c);
//	可以新增一个枚举变量
	enum color c1=3;
	printf("%d\n",c1);
}

void struct_type(){
//	分步定义结构体
	/*1.创建结构类型*/
	struct node{
		int data;
		float time;
		char *description;
	};
	/*2.给新创建的类型起别名*/
	typedef struct node node;

	node n={2023,2.14,"hello world"};
	printf("data: %d time: %f description: %s\n",n.data,n.time,n.description);
	printf("&data: %p &time: %p &description: %p\n",&(n.data),&(n.time),&(n.description));

//	一步到位
	typedef struct date{
		int year;
		int month;
		int day;
	}date;
	date t={2023,2,10};
	printf("今天是%d年%d月%d日",t.year,t.month,t.day);

}
