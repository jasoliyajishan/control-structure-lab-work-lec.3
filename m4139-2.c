#include<stdio.h>

main()
{
int month;

printf("\n1 for january");
printf("\n2 for fabruary");
printf("\n3 for march");
printf("\n4 for april");
printf("\n5 for may");
printf("\n6 for june");
printf("\n7 for july");
printf("\n8 for august");
printf("\n9 for september");
printf("\n10 for october");
printf("\n11 for november");
printf("\n12 for december");

printf("\nenter month number=");
scanf("%d",&month);
switch(month)
{
case 1:
	printf("january");
	break;
case 2:
	printf("fabruary");
	break;
case 3:
	printf("march");
	break;
case 4:
	printf("april");
	break;
case 5:
	printf("may");
	break;
case 6:
	printf("june");
	break;
case 7:
	printf("july");
	break;
case 8:
	printf("august");
	break;
case 9:
	printf("september");
	break;
case 10:
	printf("october");
	break;
case 11:
	printf("november");
	break;
case 12:
	printf("december");
	break;



default:
printf("invild month number");
     break;	
}


return 0;	
}
