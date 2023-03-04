/*
 * base.c
 *
 *  Created on: 2023年3月4日
 *      Author: Crist
 */
#include <stdio.h>

void base(){
//	变量的四要素：类型、名字、值、地址
	int a=2;
	printf("用变量名获取变量值a: %d\n",a);
	printf("用&获取变量a的地址&a: %p\n",&a);
	printf("用*和&获取变量值a: %d\n",*(&a));
//	于是我们定义特殊的变量——指针变量(地址变量),语法上，指针变量名前用*号标识，变量值为&a
	int *p=&a;
	printf("取得指针变量的值p: %p\n",p);	/*十六进制地址*/
	printf("取得指针变量的地址&p: %p\n",&p);
	printf("整型指针变量占用的内存大小: %d\n",(int)sizeof(int*));
	printf("\n");

//	数组是一个容器，数组变量是指针变量(地址变量)
	int arr[10]={0,1,2,3,4,5,6,7,8,9};	/*定义了含有10个单元的数组，每个单元只能存放int型的数据*/
//	数组变量的值即数组首单元的地址,数组变量的地址也等于数组首单元的地址
	printf("取得数组变量的值arr: %p\n",arr);
	printf("取得数组变量的地址&arr: %p\n",&arr);
	printf("取得数组首单元的地址&arr[0]: %p\n",&arr[0]);
	printf("整型数组单元占用的内存大小: %d\n",(int)sizeof(int));
	arr[0]='a';	/*字符'a'的ascii码值是97,存入整型数组的值就是97*/
	arr[1]=101.5;	/*101.5会被转成int型数据101后再存入数组*/

//	遍历数组中的数据
	/*方法一：使用数组下标*/
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	/*方法二：使用指针*/
	int *point=arr;
	for(int j=0;j<10;j++){
		printf("%d ",*point);
		point++;
	}
	printf("\n");

}

