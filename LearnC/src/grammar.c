/*
 * grammar.c
 *
 *  Created on: 2023年2月10日
 *      Author: Crist
 */
#include <stdio.h>
#include "grammar.h"

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
	typedef struct date{
		int year;
		int month;
		int day;
	}date;
//	struct date t={2023,2,10};
	date t={2023,2,10};
	printf("今天是%d年%d月%d日",t.year,t.month,t.day);
}
