/*
 * ArrayPointer.c
 *
 *  Created on: 2022年12月11日
 *      Author: zengpeng
 */

#include <stdio.h>

int pointer(void){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int a=999;
	int *p=&a;
	printf("%p\n",arr);
	printf("%p\n",p);
	printf("%d\n",*p);

	*p=111;
	printf("%d\n",a);
	*arr=0;
	printf("%d",arr[0]);

	return 0;
}

