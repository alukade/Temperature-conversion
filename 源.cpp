#include<stdio.h>
int main()
{
	float a, b;
	printf("请输入华氏度：");
	scanf_s("%f", &a);
	b = (5.0/ 9) * (a - 32);
	printf("摄氏温度为:%f\n", b);
	return 0;
}