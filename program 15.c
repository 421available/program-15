#include<stdio.h>
void main()
{
	int y;
	printf("Enter the number y:");
	scanf("%d",&y);
	if(y>0)
	printf("%d is postive.",y);
	else if(y<0)
	printf("%d is negative.",y);
	else if(y==0)
	printf("%d is zero.",y);
}
