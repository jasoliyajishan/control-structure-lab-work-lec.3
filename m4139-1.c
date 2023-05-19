#include<conio.h>
main()
{
	int choice,gujarati,punjabi,chinese;
	
	printf("press 1 for gujarati food\n");
	printf("press 2 for punjabi food\n");
	printf("press 3 for chinese food\n");
	printf("enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			   printf("gujarati food corner\n");
			   printf("press 1 for dhokla\n");
			   printf("press 2 for undhiyu\n");
			   printf("press 3 for thepla\n");
			   printf("press 4 for roti\n");
			   printf("press 5 for butter milk\n");
			   printf("enter your choice : ");
	           scanf("%d",&gujarati);
			   switch(gujarati) 
			   {
			   	     case 1 :
			   	     	     printf("order to dhokla");
			   	     	     break;
			   	     case 2 :
			   	     	     printf("order to undhiyu");
			   	     	     break;
			   	     case 3 :
			   	     	     printf("order to thepla");
			   	     	     break;
			   	     case 4 :
			   	     	     printf("order to rati");
			   	     	     break;
			   	     case 5 :
			   	     	     printf("order to butter milk");
			   	     	     break;
		       }
	    break;
	    case 2:
	    	   
			   printf("\npunjabi food corner");
			   printf("\npress 1 for chole bhature");
			   printf("\npress 2 for dal makhani");
			   printf("\npress 3 for paneer tikka");
			   printf("\npress 4 for palak paneer");
			   printf("\npress 5 for paratha\n");
			   printf("enter your choice : ");
	           scanf("%d",&punjabi);
			   switch(punjabi) 
			   {
			   	     case 1 :
			   	     	     printf("order to chole bhature");
			   	     	     break;
			   	     case 2 :
			   	     	     printf("order to dal makhani");
			   	     	     break;
			   	     case 3 :
			   	     	     printf("order to paneer tikka");
			   	     	     break;
			   	     case 4 :
			   	     	     printf("order to palak paneer");
			   	     	     break;
			   	     case 5 :
			   	     	     printf("order to paratha");
			   	     	     break;
			   }
		break;	
		case 3:
		        printf("chinese food corner");
			   printf("\npress 1 for chinese bhel");
			   printf("\npress 2 for fried rice");
			   printf("\npress 3 for manchurian");
			   printf("\npress 4 for noodles");
			   printf("\npress 5 for chilli paneer dry");
			   printf("\nenter your choice : ");
	           scanf("%d",&chinese);
			   switch(chinese) 
			   {
			   	     case 1 :
			   	     	     printf("order to  chinese bhel");
			   	     	     break;
			   	     case 2 :
			   	     	     printf("order to dal fried rice");
			   	     	     break;
			   	     case 3 :
			   	     	     printf("order to paneer  manchurian");
			   	     	     break;
			   	     case 4 :
			   	     	     printf("order to noodles");
			   	     	     break;
			   	     case 5 :
			   	     	     printf("order to chilli paneer dry");
			   	     	     break;
			   }
		break;	   	     	     
	 } 
}
