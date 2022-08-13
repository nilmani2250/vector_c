#include<stdio.h>
int palindrome_check(int);
void main()
{
  int num,r,sum;
  printf("Enter the number\n");
  scanf("%d\n",&num);
  r=palidrome_check(num);
  if(r==1)
    printf("palidrome...\n");
  else
    printf("Not palindrome...\n");
}
int palindrome_check(int num)
{
  int sum=0,temp=num,r;
  while(temp!=0)
  {
    r=temp%10;
    sum=sum*10+r;
    temp=temp/10;
  }
  if(num==sum)
    return 1;
  else
    return 0;
}
