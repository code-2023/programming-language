/*
 * pointer.c
 *
 *  Created on: 2023年3月4日
 *      Author: Crist
 */

#include <stdio.h> //使用NULL和输入输出函数
#include <string.h> //使用字符串函数
#include "pointer.h"

void char_pointer(){
	char *str='\0';
	char *str1="hello1";
	char *str2="hello2";
	char* str_ptr[]={str1,str2};
//	str1[0]='H'; 指针所指的字符串是无法改动的，只读的
	if(str==NULL){
		printf("这是一个空指针\n");
	}
	printf("str1指向地址：%p\n",str1);
	printf("str2指向地址：%p\n",str2);
	printf("%p\n",str_ptr);
	printf("%p\n",*str_ptr);

	printf("一个指针变量占用的内存大小：%I64dBytes\n",sizeof(str1));
	//以%s的格式输出指针指向的字符串
	printf("%s\n",str1);
	printf("%s\n",str1+1);
}

void char_pointer_arr(){
	char *arr[30];
	char *str="hello world";
	int l=(int)strlen(str);
	for(int i=0;i<l;i++){
		arr[i]=str++;
	}
	for(int j=0;j<l;j++){
		printf("字符%c对应地址%p\n",*arr[j],arr[j]);
	}
}
