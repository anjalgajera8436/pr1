#include<stdio.h>
#include<conio.h>

void main ()
{
	int salary,hra,da,ta,grossalary;
	
	printf("enter your salary:");
	scanf("%d",&salary);
	
	printf("enter hra percentage:");
	scanf("%d",&hra);
	
	printf("enter da percentage:");
	scanf("%d",&da);
	
	printf("enter ta percentage:");
	scanf("%d",&ta);
	
	da=(da*salary)/100;
	ta=(ta*salary)/100;
	hra=(hra*salary)/100;	
	
	grossalary=salary+hra+da+ta;
	
	printf("grossalary:5d\n",grossalary);
	
	
}
