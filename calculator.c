#include<tdio.h>
void main()
{
int n1,2,n3;
char op;
printf("Enter the number...\n");
scanf("%d%d",&n1,&n2);
printf("Enter the op\n + add\n-sub\n*mul\n/divide\n");
switch(op)
{
case'+': n3=n1+n2;
printf("%d\n",n3);
case'-': n3=n1-n2;
printf("%d\n",n3);
case'*': n3=n1*n2;
printf("%d\n",n3);
case'/': n3=n1/n2;
printf("%d\n",n3);
break;
default:printf("Unknown option...\n");
}
}
