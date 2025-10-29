#include<stdio.h> 
#include<conio.h>
int main(){
    int age=18;//int表示定义一个整型变量age，age=18表示变量age的初始值为18 
    age=age+10;//这一步表示在上一步的变量结果 加10，下面几步也是一样 
	age=age+10;
	age=age+10;
	age=age+0;
	int a;//新定义一个整型变量a 
	for(a=1;a<=100;a=a+1){//for表示循环语句，括号里面对循环的内容进行说明：如a的初始值为1，a的范围为小于等于一百；a不断进行加一 
	age=age+a;//表示变量age等于前一个变量age加上a 
	}
	printf("你的年龄是%d",age);
	getch();
	return 0;
}
