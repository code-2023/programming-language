/*
 * pointer.c
 *
 *  Created on: 2023��3��4��
 *      Author: Crist
 */

#include <stdio.h> //ʹ��NULL�������������
#include <string.h> //ʹ���ַ�������
#include "pointer.h"

void char_pointer(){
	char *str='\0';
	char *str1="hello1";
	char *str2="hello2";
	char* str_ptr[]={str1,str2};
//	str1[0]='H'; ָ����ָ���ַ������޷��Ķ��ģ�ֻ����
	if(str==NULL){
		printf("����һ����ָ��\n");
	}
	printf("str1ָ���ַ��%p\n",str1);
	printf("str2ָ���ַ��%p\n",str2);
	printf("%p\n",str_ptr);
	printf("%p\n",*str_ptr);

	printf("һ��ָ�����ռ�õ��ڴ��С��%I64dBytes\n",sizeof(str1));
	//��%s�ĸ�ʽ���ָ��ָ����ַ���
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
		printf("�ַ�%c��Ӧ��ַ%p\n",*arr[j],arr[j]);
	}
}
