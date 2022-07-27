#include<stdio.h>
#include<conio.h>
int main()
{
	float x,y,PIN;  
	int choice;	
	printf("\nENTER YOUR SECRET PIN NUMBER\n");
	scanf("%f",&PIN);			
	if(PIN==1234)
	{
		printf("\nHi pratyaksh\n");
	}
	else if(PIN==4321)
		{
		printf("\nHI RAJU\n");
	}
	else if(PIN==3421)
	{
		printf("\nHI SHYAM\n");
	}
	else if(PIN==3421)
	{
		
	printf("\n HI ASMIT \n");
}

else if(PIN==4499)
{
printf("\nHI SOUVIK\n");
}

else if(PIN==0012)
{
	
	printf("\nHI HARSH\n");
}

else if(PIN==9971)
{
	printf("\n HI ESHAN\n");
}

		else
	{
		printf("\n!!!!!!!!!!!! enter valid pin for further processing!!!!!!!!!!!!!!!!!!!\n");
		return 0;
	}
	printf("*******!!!!!!!!!!!!!!!!!!!!!!!!!.....welcome to atm machine system......!!!!!!!!!!!!!!!!!!!*******");
	printf("\n\n********************************************************\n\n");
printf("\n\nenter amount\n");
	scanf("%f",&x);
	printf("\nenter your choice\n");
	printf("\n press 1 for diposite\n");
	printf("\n press 2 for withdrawn\n");
	printf("\n press 3 for check your balance\n");
	printf("\npress 4 for quit\n");
	scanf("%d",&choice);	
	switch(choice)
	{
	case 1:

		printf("\nenter diposit amount\n");
		scanf("%f",&y);
		x=x+y;
		printf("\nyour new balance is credit successfully\n");
		printf("\nyour total balance is=%f\n",x);
		break;
	case 2:
	printf("\nenter the amount you want to withdrawn\n");
	scanf("%f",&y);
	if(x>=y)
	{
	x=x-y;
	printf("\n your amount is withdrawn successfully\n");
	printf("\nyour total balance is=%f\n",x);   
	}
	else
	{
			printf("\ninsufficient amount\n\n");
		break;
			}
	case 3:
		{
		printf("\navailable amount in your acoount is=%f\n\n",x);
	break;
}
default:
	printf("\n!!!!!!!!!!wrong choice!!!!!!!!!!!!!!!\n");
}
printf("\n\nthanks visit again\n\n");
printf("\n\n*******************************************\n\n");

getch();
}

