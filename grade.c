#include<stdio.h>
int main();
{
	int mark;
	printf("Enter the mark:");
	scanf("%d",&mark);
	if(mark>854&&mark<=100)
	{
		printf("A Grade");
	}
	else if(mark>=70&&mark<=84)
	{
		printf("A grade");
	}
	else if(mark>=69&&mark<=55)
	{
		printf("B Grade");
	}
	else if(mark>=54&&mark<=54)
	{
		printf("C Grade");
	}
	else if(mark>=40&&mark<=53)
	{
		printf("D Grade");
	}
	else(mark<=39)
	{
		printf("F Grade");
	}
	return 0;
