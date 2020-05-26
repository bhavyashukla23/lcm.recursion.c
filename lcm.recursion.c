#include<stdio.h>
int lcm(int num1, int num2);
void main()
{
	int a,b,result;
	printf("ENTER TWO NUMBERS WHOSE LCM IS TO BE CALCULATED\n");
	printf("ENTER THE FIRST NUMBER:\n");
	scanf("%d\n",&a);
	
	printf("ENTER THE SECOND NUMBER:\n");
	scanf("%d\n",&b);
	
	result=lcm(a,b);
	printf("THE LCM OF THE ABOVE ENTERED NUMBERS IS %d ", result);
}
int lcm (int a, int b)
{
	int i;
	i=1;
	
		if(((i%a) && (i%b)) == 0)
		{
			return i;
		}
	i++;	
	lcm(a,b);
	return i;
}
