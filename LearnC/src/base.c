/*
 * base.c
 *
 *  Created on: 2023��3��4��
 *      Author: Crist
 */
#include <stdio.h>

void base(){
//	��������Ҫ�أ����͡����֡�ֵ����ַ
	int a=2;
	printf("�ñ�������ȡ����ֵa: %d\n",a);
	printf("��&��ȡ����a�ĵ�ַ&a: %p\n",&a);
	printf("��*��&��ȡ����ֵa: %d\n",*(&a));
//	�������Ƕ�������ı�������ָ�����(��ַ����),�﷨�ϣ�ָ�������ǰ��*�ű�ʶ������ֵΪ&a
	int *p=&a;
	printf("ȡ��ָ�������ֵp: %p\n",p);	/*ʮ�����Ƶ�ַ*/
	printf("ȡ��ָ������ĵ�ַ&p: %p\n",&p);
	printf("����ָ�����ռ�õ��ڴ��С: %d\n",(int)sizeof(int*));
	printf("\n");

//	������һ�����������������ָ�����(��ַ����)
	int arr[10]={0,1,2,3,4,5,6,7,8,9};	/*�����˺���10����Ԫ�����飬ÿ����Ԫֻ�ܴ��int�͵�����*/
//	���������ֵ�������׵�Ԫ�ĵ�ַ,��������ĵ�ַҲ���������׵�Ԫ�ĵ�ַ
	printf("ȡ�����������ֵarr: %p\n",arr);
	printf("ȡ����������ĵ�ַ&arr: %p\n",&arr);
	printf("ȡ�������׵�Ԫ�ĵ�ַ&arr[0]: %p\n",&arr[0]);
	printf("�������鵥Ԫռ�õ��ڴ��С: %d\n",(int)sizeof(int));
	arr[0]='a';	/*�ַ�'a'��ascii��ֵ��97,�������������ֵ����97*/
	arr[1]=101.5;	/*101.5�ᱻת��int������101���ٴ�������*/

//	���������е�����
	/*����һ��ʹ�������±�*/
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	/*��������ʹ��ָ��*/
	int *point=arr;
	for(int j=0;j<10;j++){
		printf("%d ",*point);
		point++;
	}
	printf("\n");

}
