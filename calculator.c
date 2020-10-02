#include<stdio.h>
main()
{
int a,b,op;
printf("enter the values a,b");
scanf("%d%d",&a,&b);
printf("1.sum\n2.difference\n3.product\n4.division\n5.power\n6.remainder\nenter operator op");
scanf("%d",&op);
switch(op)
{
case 1:
printf("the sum is %d",a+b);
break;
case 2:
printf("the difference is %d",a-b);
break;
case 3:
printf("the product is %d",a*b);
break;
case 4:
printf("the division of a,b is %d",a/b);
break;
case 5:
printf("the power of a,b is %d",a^b);
break;
case 6:
printf("the reminder of a/b is %d",a%b);
break;
default:
printf("not a valid operator");
}
}
