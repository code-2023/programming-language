/*
 * grammar.c
 *
 *  Created on: 2023��2��10��
 *      Author: Crist
 */
#include <stdio.h>
#include "grammar.h"

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
	typedef struct date{
		int year;
		int month;
		int day;
	}date;
//	struct date t={2023,2,10};
	date t={2023,2,10};
	printf("������%d��%d��%d��",t.year,t.month,t.day);
}
