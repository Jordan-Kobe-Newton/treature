#include<stdio.h> 
#include<conio.h>
int main(){
    int age=18;//int��ʾ����һ�����ͱ���age��age=18��ʾ����age�ĳ�ʼֵΪ18 
    age=age+10;//��һ����ʾ����һ���ı������ ��10�����漸��Ҳ��һ�� 
	age=age+10;
	age=age+10;
	age=age+0;
	int a;//�¶���һ�����ͱ���a 
	for(a=1;a<=100;a=a+1){//for��ʾѭ����䣬���������ѭ�������ݽ���˵������a�ĳ�ʼֵΪ1��a�ķ�ΧΪС�ڵ���һ�٣�a���Ͻ��м�һ 
	age=age+a;//��ʾ����age����ǰһ������age����a 
	}
	printf("���������%d",age);
	getch();
	return 0;
}
