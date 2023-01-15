/*
 ============================================================================
 Name        : LearnC.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	int b=3;
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	printf("表达式a=0的值是%d\n",a=0);
	printf("表达式a=101的值是%d\n",a=101);
	if(1)
	{
		printf("在内层输出外层变量b的值：%d\n",b);
		int b=99;
		printf("在内层输出内层变量b的值：%d\n",b);
	}
	printf("输出外层变量b的值：%d\n",b);
	return 0;
}
