#include<stdio.h>
int Add(int,int);
int Sub(int,int);
int Multiply(int,int);
float Divide(int,int);
int main()

{
	int no1,no2;
	float result;
	printf("Enter Two Numbers \n");
	scanf("%d",&no1);
	scanf("%d",&no2);
	printf("\n Addition Result is");
	result=Add(no1,no2);
	printf("%f",result);
	printf("\n Substraction Result is");
	result=Sub(no1,no2);
	printf("%f",result);
	printf("\n Multiplication Result is");
	result=Multiply(no1,no2);
	printf("%f",result);
	printf("\n Division Result is");
	result=Divide(no1,no2);
	printf("%f",result);
	getchar();
}
int Add(int num1,int num2)
{
	return (num1+num2);
	
}
int Sub(int num1,int num2)
{
	return (num1-num2);
	
}
int Multiply(int num1,int num2)
{
	return (num1*num2);
	
}
float Divide(int num1,int num2)
{
	return (num1/num2);
	
}
