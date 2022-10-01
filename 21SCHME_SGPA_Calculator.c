#include<stdio.h>
#include<stdlib.h>
int main()
{
	int math,phy,ele,civ,caed,phyl,elel,eng,idt,mg,pg,eleg,civg,caeg,plg,elg,engg,idg;
	float SGPA;
	
	printf("Enter the marks of 21MAT11/21\n");
	scanf("%d",&math);
	if(math>100)
	{
		printf("Invalid input");
		exit(0);
	}
	else if(math>=90)
			mg=10*3;
	else if(math>=80)
			mg=9*3;
	else if(math>=70)
			mg=8*3;
	else if(math>=60)
			mg=7*3;
	else if(math>=55)
			mg=6*3;
	else if(math>=50)
			mg=5*3;
	else if(math>=40)
			mg=4*3;
	else if(math>=0)
			mg=0;
	else
	{
		printf("Invalid input");
		exit(0);
	}
	
	printf("Enter the marks of 21PHY12/22 or 21CHE12/22\n");
	scanf("%d",&phy);
	if(phy>100)
	{
		printf("Invalid input");
		exit(0);
	}
	else if(phy>=90)
			pg=10*3;
	else if(phy>=80)
			pg=9*3;
	else if(phy>=70)
			pg=8*3;
	else if(phy>=60)
			pg=7*3;
	else if(phy>=55)
			pg=6*3;
	else if(phy>=50)
			pg=5*3;
	else if(phy>=40)
			pg=4*3;
	else if(phy>=0)
			pg=0;
	else
	{
		printf("Invalid input");
		exit(0);
	}
			
	printf("Enter the marks of 21ELE13/23 or 21PSP13/23\n");
	scanf("%d",&ele);
	if(ele>100)
	{
		printf("Invalid input");
		exit(0);
	}
	else if(ele>=90)
			eleg=10*3;
	else if(ele>=80)
			eleg=9*3;
	else if(ele>=70)
			eleg=8*3;
	else if(ele>=60)
			eleg=7*3;
	else if(ele>=55)
			eleg=6*3;
	else if(ele>=50)
			eleg=5*3;
	else if(ele>=40)
			eleg=4*3;
	else if(ele>=0)
			eleg=0;
	else
	{
		printf("Invalid input");
		exit(0);
	}
			
	printf("Enter the marks of 21CIV14/24 or 21ELN14/24\n");
	scanf("%d",&civ);
	if(civ>100)
	{
		printf("Invalid input");
		exit(0);
	}
	else if(civ>=90)
			civg=10*3;
	else if(civ>=80)
			civg=9*3;
	else if(civ>=70)
			civg=8*3;
	else if(civ>=60)
			civg=7*3;
	else if(civ>=55)
			civg=6*3;
	else if(civ>=50)
			civg=5*3;
	else if(civ>=40)
			civg=4*3;
	else if(civ>=0)
			civg=0;
	else
	{
		printf("Invalid input");
		exit(0);
	}
		
	printf("Enter the marks of 21EVN15/25 or 21EME15/25\n");
	scanf("%d",&caed);
	if(caed>100)
	{
		printf("Invalid input");
		exit(0);
	}
	else if(caed>=90)
			caeg=10*3;
	else if(caed>=80)
			caeg=9*3;
	else if(caed>=70)
			caeg=8*3;
	else if(caed>=60)
			caeg=7*3;
	else if(caed>=55)
			caeg=6*3;	
	else if(caed>=50)
			caeg=5*3;
	else if(caed>=40)
			caeg=4*3;
	else if(caed>=0)
			caeg=0;
	else
	{
		printf("Invalid input");
		exit(0);
	}
		
	printf("Enter the marks of 21PHYL16/26 or 21CHEL16/26\n");
	scanf("%d",&phyl);
	if(phyl>100)
	{
		printf("Invalid input");
		exit(0);
	}
	else if(phyl>=90)
			plg=10;
	else if(phyl>=80)
			plg=9;
	else if(phyl>=70)
			plg=8;
	else if(phyl>=60)
			plg=7;
	else if(phyl>=55)
			plg=6;
	else if(phyl>=50)
			plg=5;
	else if(phyl>=40)
			plg=4;
	else if(phyl>=0)
			plg=0;
	else
	{
		printf("Invalid input");
		exit(0);
	}
		
	printf("Enter the marks of 21ELEL17/27 or 21CPL17/27\n");
	scanf("%d",&elel);
	if(elel>100)
	{
		printf("Invalid input");
		exit(0);
	}
	else if(elel>=90)
			elg=10;
	else if(elel>=80)
			elg=9;
	else if(elel>=70)
			elg=8;
	else if(elel>=60)
			elg=7;
	else if(elel>=55)
			elg=6;
	else if(elel>=50)
			elg=5;
	else if(elel>=40)
			elg=4;
	else if(elel>=0)
			elg=0;
	else
	{
		printf("Invalid input");
		exit(0);
	}
		
	printf("Enter the marks of 21EGH18/28 \n");
	scanf("%d",&eng);
	if(eng>100)
	{
		printf("Invalid input");
		exit(0);
	}
	else if(eng>=90)
			engg=10*2;
	else if(eng>=80)
			engg=9*2;
	else if(eng>=70)
			engg=8*2;
	else if(eng>=60)
			engg=7*2;
	else if(eng>=55)
			engg=6*2;
	else if(eng>=50)
			engg=5*2;
	else if(eng>=40)
			engg=4*2;
	else if(eng>=0)
			engg=0;
	else
	{
		printf("Invalid input");
		exit(0);
	}

	printf("Enter the marks of 21IDT19/29 or 21SFH19/29\n");
	scanf("%d",&idt);
	if(idt>100)
	{
		printf("Invalid input");
		exit(0);
	}
	else if(idt>=90)
			idg=10;
	else if(idt>=80)
			idg=9;
	else if(idt>=70)
			idg=8;
	else if(idt>=60)
			idg=7;
	else if(idt>=55)
			idg=6;
	else if(idt>=50)
			idg=5;
	else if(idt>=40)
			idg=4;
	else if(idt>=0)
			idg=0;
	else
	{
		printf("Invalid input");
		exit(0);
	}

	printf("Your SGPA is : %.2f\n",(float)(mg+pg+eleg+civg+caeg+plg+elg+engg+idg)/20);
	printf("THANK YOU \nREGARDS PRATHAM AJERU");
}
