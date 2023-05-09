#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int tot,ch, n=0;
int i=0;

struct employee{
char ID[6];
char name[100];
char DOB[11];
char Address[200];
char Phone[11];
char Department[4];
char Salary[10];
char DOJ[11];	
} *ptr;

void addemp();
void disemp();
void updemp();
void delemp();
void dis_emp_dept();
void salary();
void birthday();
void join();
void str();
void uniquee();

void showchoice()
{
    system("CLS");
	printf("\n1. Add new employee \n2. Update employee details\n3. Delete employee details\n4. Display all employee details\n5. Display all employee names given a department\n6. Display earned salary given no of days worked in a month\n7. Display all unique department names\n8. Greet all employees on their birthday, given a date\n9. Display all employee details who joined on a given date\n10. Display Names and Phone Numbers of Employee if name  starts with a given string \n0.Exit\n");
	printf("\nENTER YOUR CHOICE\t"); scanf("%d",&ch);
   	
}
int main()
{
	
	printf("\nENTER NO EMPLOYEES:\t"); 
	scanf("%d",&n);	
	ptr = (struct employee *)(malloc(n*sizeof(struct employee)));
	for(i=0;i<n;i++)
	{
	system("CLS");
	printf("\n************************************************************************************\n");
	printf("\n-------------------------------------EMPLOYEE-%d-------------------------------------\n",(i+1));	
	printf("\n************************************************************************************\n");
	
	printf("\n1.ENTER EMPLOYEE ID:\t");
	scanf("%s",&(ptr+i)->ID);
	printf("\n__________________________________________________________________________________\n");
	
	printf("\n2.ENTER EMPLOYEE NAME:\t");
	getchar();
	gets((ptr+i)->name);
	printf("\n__________________________________________________________________________________\n");
	
	
	
	printf("\n3.ENTER EMPLOYEE DATE OF BIRTH (DD-MM-YYYY):\t");
	scanf("%s",&(ptr+i)->DOB);
	printf("\n__________________________________________________________________________________\n");
	
	printf("\n4.ENTER EMPLOYEE ADDRESS:\t");
	getchar();
	gets((ptr+i)->Address);
    printf("\n__________________________________________________________________________________\n");
    
    printf("\n5.ENTER EMPLOYEE PHONE NUMBER:\t");
	scanf("%s",&(ptr+i)->Phone);
	
    printf("\n__________________________________________________________________________________\n");
    
    printf("\n6.ENTER EMPLOYEE DEPARTMENT (CSE , CSY , ECE ,EEE ):\t");
	scanf("%s",&(ptr+i)->Department);
    printf("\n__________________________________________________________________________________\n");
    
    
    printf("\n7.ENTER EMPLOYEE SALARY:\t");
	scanf("%s",&(ptr+i)->Salary);
    printf("\n__________________________________________________________________________________\n");
    
    
    printf("\n8.ENTER EMPLOYEE DATE OF JOIN (DD-MM-YYYY):\t");
	scanf("%s",&(ptr+i)->DOJ);
	printf("\n__________________________________________________________________________________\n");
    
    system("CLS");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
    	printf("\t \t \t EMPLOYEE-%d DETAILS ADDED!!!!\n",(i+1));
	getch();
	
    }	
	
	
	

	
    
	showchoice();
	
	while(ch!=0)
	{
		
		switch(ch)
		{
			
			case 1 : addemp(); break;
			case 2 : updemp(); break;
			case 3 : delemp();break;
			case 4 : disemp(); break;
			case 5 : dis_emp_dept();break;
			case 6 : salary();break;
			case 7 : uniquee();break;
			case 8 : birthday();break;
			case 9 : join();break;
			case 10 : str();break;
			default : printf("#---INVALID CHOICE---#");
			 
		
		}
		showchoice();
		
	   	
	   
		
		
	}
return 0;	
}

void disemp()
{
	system("CLS");
	printf("\n****************************************************************************************\n");
	printf("\n--------------------------------LIST OF EMPLOYEE DETAILS--------------------------------\n");	
	printf("\n****************************************************************************************\n");
	

	printf("\n__________________________________________________________________________________________________________________________________________________________________________\n");
	printf("\n ID   \t||\t NAME                \t||\t DEPARTMENT \t||\t DATE OF BIRTH \t||\t PHONE NUMBER \t||\t DATE OF JOIN \t||\t SALARY    \t||\t  \n");
	printf("\n___________________________________________________________________________________________________________________________________________________________________________\n");
	for (i=0;i<n;i++)
	{
	printf("\n %s \t||\t %20s \t||\t %s        \t||\t %s    \t||\t %s   \t||\t %s    \t||\t %s \t||\t " ,(ptr+i)->ID , (ptr+i)->name , (ptr+i)->Department, (ptr+i)->DOB, (ptr+i)->Phone,(ptr+i)->DOJ, (ptr+i)->Salary );
	printf("\n____________________________________________________________________________________________________________________________________________________________________________\n");
	
    }
    getch();
    
}

void addemp()
{   
	system("CLS");
	printf("\n************************************************************************************\n");
	printf("\n--------------------------------ADD EMPLOYEE DETAILS--------------------------------\n");	
	printf("\n************************************************************************************\n");
 		
    ptr=(struct employee *)(realloc(ptr , (n+1)*sizeof(struct employee)));
    for (i=n;i<n+1;i++){
    printf("\n************************************************************************************\n");
	printf("\n-------------------------------------EMPLOYEE-%d-------------------------------------\n",(i+1));	
	printf("\n************************************************************************************\n");
	
	
	printf("\n1.ENTER EMPLOYEE ID:\t");
	scanf("%s",&(ptr+i)->ID);
	printf("\n__________________________________________________________________________________\n");
	
	printf("\n2.ENTER EMPLOYEE NAME:\t");
	getchar();
	gets((ptr+i)->name);
	printf("\n__________________________________________________________________________________\n");
	
	
	
	printf("\n3.ENTER EMPLOYEE DATE OF BIRTH (DD-MM-YYYY):\t");
	scanf("%s",&(ptr+i)->DOB);
	printf("\n__________________________________________________________________________________\n");
	
	printf("\n4.ENTER EMPLOYEE ADDRESS:\t");
	getchar();
	gets((ptr+i)->Address);
    printf("\n__________________________________________________________________________________\n");
    
    printf("\n5.ENTER EMPLOYEE PHONE NUMBER:\t");
	scanf("%s",&(ptr+i)->Phone);
	
    printf("\n__________________________________________________________________________________\n");
    
    printf("\n6.ENTER EMPLOYEE DEPARTMENT (CSE , CSY , ECE ,EEE ):\t");
	scanf("%s",&(ptr+i)->Department);
    printf("\n__________________________________________________________________________________\n");
    
    
    printf("\n7.ENTER EMPLOYEE SALARY:\t");
	scanf("%s",&(ptr+i)->Salary);
    printf("\n__________________________________________________________________________________\n");
    
    
    printf("\n8.ENTER EMPLOYEE DATE OF JOIN (DD-MM-YYYY):\t");
	scanf("%s",&(ptr+i)->DOJ);
	printf("\n__________________________________________________________________________________\n");
    
    
    system("CLS");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
    	printf("\t \t \t EMPLOYEE-%d DETAILS ADDED!!!!\n",(i+1));
    }
		n++ ;	
	
	getch();
	
}

void updemp()
{
	system("CLS");
	printf("\n****************************************************************************************\n");
	printf("\n---------------------------------UPDATE EMPLOYEE RECORD---------------------------------\n");	
	printf("\n****************************************************************************************\n");
	
	char str[6];
	int a;
	int b;
	int count=0;
	printf("\nENTER EMPLOYEE ID TO BE UPDATED :\t");
	scanf("%s" ,&str);
	for(a=0;a<n;a++)
	{
		if(strcmp(str,(ptr+a)->ID)==0)
		{
			b=a	;
	printf("\n*****************************************************************************************\n");
	printf("\n----------------------------------------OLD RECORD---------------------------------------\n");	
	printf("\n*****************************************************************************************\n");
	
	printf("\n__________________________________________________________________________________________________________________________________________________________________________\n");
	printf("\n ID   \t||\t NAME                \t||\t DEPARTMENT \t||\t DATE OF BIRTH \t||\t PHONE NUMBER \t||\t DATE OF JOIN \t||\t SALARY    \t||\t  \n");
	printf("\n___________________________________________________________________________________________________________________________________________________________________________\n");
	printf("\n %s \t||\t %20s \t||\t %s        \t||\t %s    \t||\t %s   \t||\t %s    \t||\t %s \t||\t " ,(ptr+b)->ID , (ptr+b)->name , (ptr+b)->Department, (ptr+b)->DOB, (ptr+b)->Phone,(ptr+b)->DOJ, (ptr+b)->Salary );
	printf("\n____________________________________________________________________________________________________________________________________________________________________________\n");
	
	printf("\n*****************************************************************************************\n");
	printf("\n----------------------------------------NEW RECORD---------------------------------------\n");	
	printf("\n*****************************************************************************************\n");
	
	
	printf("\n1.ENTER EMPLOYEE NAME:\t");
	getchar();
	gets((ptr+b)->name);
	printf("\n__________________________________________________________________________________\n");
	
	
	
	printf("\n2.ENTER EMPLOYEE DATE OF BIRTH (DD-MM-YYYY):\t");
	scanf("%s",&(ptr+b)->DOB);
	printf("\n__________________________________________________________________________________\n");
	
	printf("\n3.ENTER EMPLOYEE ADDRESS:\t");
	getchar();
	gets((ptr+b)->Address);
    printf("\n__________________________________________________________________________________\n");
    
    printf("\n4.ENTER EMPLOYEE PHONE NUMBER:\t");
	scanf("%s",&(ptr+b)->Phone);
	
    printf("\n__________________________________________________________________________________\n");
    
    printf("\n5.ENTER EMPLOYEE DEPARTMENT (CSE , CSY , ECE ,EEE ):\t");
	scanf("%s",&(ptr+b)->Department);
    printf("\n__________________________________________________________________________________\n");
    
    
    printf("\n6.ENTER EMPLOYEE SALARY:\t");
	scanf("%s",&(ptr+b)->Salary);
    printf("\n__________________________________________________________________________________\n");
    
    
    printf("\n7.ENTER EMPLOYEE DATE OF JOIN (DD-MM-YYYY):\t");
	scanf("%s",&(ptr+b)->DOJ);
	printf("\n__________________________________________________________________________________\n");
	
	system("CLS");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
    	printf("\t \t \t EMPLOYEE DETAILS UPDATED!!!!\n");
	count++;
	getch();
		
		}
	
	
    
	} 
if(count==0)
	{
		system("CLS");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
    	printf("\t \t \t NO EMPLOYEE FOUND WITH ENTERED EMPLOYEE ID ");
    	getch();
	}	
	
}


void delemp()
{
	system("CLS");
	printf("\n****************************************************************************************\n");
	printf("\n---------------------------------DELETE EMPLOYEE RECORD---------------------------------\n");	
	printf("\n****************************************************************************************\n");
	char str[6];
	int a,b;
	int i=n;
	
	int count=0;
	printf("\nENTER EMPLOYEE ID TO BE DELETED :\t");
	scanf("%s" ,&str);
	for(a=0;a<n;a++)
	{
		if(strcmp(str,(ptr+a)->ID)==0)
		{
			i=a;
			
		}
	}
	
		for(b=i;b<n;b++){
		
			strcpy((ptr+b)->ID,(ptr+b+1)->ID);
			strcpy((ptr+b)->name,(ptr+b+1)->name);
			strcpy((ptr+b)->DOB,(ptr+b+1)->DOB);
			strcpy((ptr+b)->Address,(ptr+b+1)->Address);
			strcpy((ptr+b)->Phone,(ptr+b+1)->Phone);
			strcpy((ptr+b)->Department,(ptr+b+1)->Department);
			strcpy((ptr+b)->Salary,(ptr+b+1)->Salary);
			strcpy((ptr+b)->DOJ,(ptr+b+1)->DOJ);
			
			count++;
			
    	
    	}
    	n--;
    	printf("\n n=%d",n);
    	ptr=(struct employee *)(realloc(ptr , (n)*sizeof(struct employee)));
		system("CLS");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
    printf("\t \t \t EMPLOYEE DETAILS DELETED!!!!\n");
    		
	
	if(count==0)
	{
		system("CLS");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
    	printf("\t \t \t NO EMPLOYEE FOUND WITH ENTERED EMPLOYEE ID ");
    	
	}
	
    	getch();	
}

void dis_emp_dept()
{
	
	system("CLS");
	printf("\n****************************************************************************************\n");
	printf("\n-----------------------------------SEARCH  DEPARTMENT-----------------------------------\n");	
	printf("\n****************************************************************************************\n");
	char dept[4];
    printf("\nENTER EMPLOYEE DEPARTMENT (CSE , CSY , ECE ,EEE ):\t");
	scanf("%s",&dept);
	int a;
	int count=0;
	int b;
	for(a=0;a<n;a++)
	{
	
	if(strcmp(dept,(ptr+a)->Department)==0)
		{
		 b=a;
		printf("\n___________________________________________________________________\n");
		printf("\n ID   \t||\t NAME                \t||\t DEPARTMENT \t||\t ");
		printf("\n___________________________________________________________________\n");	 	
		printf("\n %s \t||\t %20s \t||\t %s        \t||\t" , (ptr+b)->ID , (ptr+b)->name , (ptr+b)->Department);
		printf("\n___________________________________________________________________\n");
	    count++;
	    
	     }
	    
	 }
	 if(count==0)
	{
		system("CLS");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
    	printf("\t \t \t NO EMPLOYEE FOUND WITH ENTERED DEPARTMENT");
    	
	}
	 
	 
	getch();
	
	
}


void salary()
{
	system("CLS");
	printf("\n****************************************************************************************\n");
	printf("\n-------------------------------------SALARY  EARNED-------------------------------------\n");	
	printf("\n****************************************************************************************\n");
	
char str[6];
	int a;
	int b;
	printf("\nENTER EMPLOYEE ID :\t");
	scanf("%s" ,&str);
	int count=0;
	for(a=0;a<n;a++)
	{
		if(strcmp(str,(ptr+a)->ID)==0)
		{
			b=a	;
			printf("\n*****************************************************************************************\n");
			printf("\n-------------------------------------EMPLOYEE DETAILS------------------------------------\n");	
			printf("\n*****************************************************************************************\n");
			
			printf("\n_____________________________________________________________________________\n");
			printf("\n ID   \t||\t NAME                \t||\t  SALARY    \t||\t  \n");
			printf("\n_____________________________________________________________________________\n");
			printf("\n %s \t||\t %20s \t||\t %s \t||\t " ,(ptr+b)->ID , (ptr+b)->name ,  (ptr+b)->Salary );
			printf("\n_____________________________________________________________________________\n");
			float s, days,earn;
			
			printf("\nENTER NO DAYS WORKED BY THE EMPLOYEE:\t");
			scanf("%f" , &days);
			
			s=atof((ptr+b)->Salary);
			
			earn=(days*s)/30;
			printf("\n EARNED SALARY OF THE EMPLOYEE :\t %.2f" ,earn);
			count++;
			getch();
     	}
     	
    } 
    if(count==0)
	{
		system("CLS");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
    	printf("\t \t \t NO EMPLOYEE FOUND WITH ENTERED EMPLOYEE ID");
    	getch();
	}
	

    
}

void uniquee()
{
	system("CLS");
	printf("\n****************************************************************************************\n");
	printf("\n---------------------------------UNIQUE  DEPARTMENTS------------------------------------\n");	
	printf("\n****************************************************************************************\n");
	
	int i;
	int a , b, c;
	int count=0;
	char z[100][4];
	printf("UNIQUE DEPARTMENT NAMES:\n");
	for( a=0;a<n;a++)
    {
		for(b=0;b<n;b++)
     	{
		    if(strcmp((ptr+a)->Department,(ptr+b)->Department)==0)
		         {
			         for(c=0;c<n;c++)
			         {
			         	if(strcmp((ptr+a)->Department,z[c])==0)
			  	        break;
			        	else
			            	{ 
			  	             strcpy(z[a],(ptr+a)->Department);
			  	             count ++;
					        }
	                 }
	             }
	         }
	     }
		
		for(i=0;i<count;i++){
		
	printf("%s\n",z[i]);
}

getch();
}

void birthday()
{
	system("CLS");
	printf("\n****************************************************************************************\n");
	printf("\n------------------------------------BIRTHDAY  WISHES------------------------------------\n");	
	printf("\n****************************************************************************************\n");
	char date[11];
	
	char str[5];
	int a, b ;
	printf("\nENTER TODAYS  DATE (DD-MM-YYYY):\t");
	scanf("%s" ,&date);
	int count=0;
	
	for(a=0;a<n;a++)
	{
		if(strncmp(date,(ptr+a)->DOB,6)==0)
		{
			count++;
			b=a;
			printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
			printf("\nWISH YOU MANY MORE HAPPY RETURNS OF THE DAY %s(%s)" ,(ptr+b)->name,(ptr+b)->ID);
			printf("\nFOR ALL THE GOOD WORK YOU HAVE DONE, IT IS NOT ENOUGH TO SAY THAT YOU ARE JUST A GOOD EMPLOYEE");
			printf("\nIT IS DECIDED- YOU ARE A GREAT PERSON!");
			printf("\nMAY EVERY DAY BE FILLED WITH HAPPINESS, GOOD HEALTH AND MARVELOUS LUCK,");
			printf("\nENJOY YOUR BIRTHDAY %s AND A GREAT YEAR AHEAD." , (ptr+b)->name);
			printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
		   
		}
    }
    
    if(count==0)
	{
		system("CLS");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
    	printf("\t \t \t NO EMPLOYEE IS CELEBRATING BIRTHDAY ON THIS ENTERED DATE");
    	
	}
    
	getch();		

}

void join()
{
	system("CLS");
	printf("\n****************************************************************************************\n");
	printf("\n------------------------------------DATE OF JOIN----------------------------------------\n");	
	printf("\n****************************************************************************************\n");
	char date[11];
	char str[5];
	int a, b ;
	printf("\nENTER  DATE (DD-MM-YYYY):\t");
	scanf("%s" ,&date);
	int count =0;
	
	for(a=0;a<n;a++)
	{
		if(strcmp(date,(ptr+a)->DOJ)==0)
		{
			
			b=a;
			printf("\n__________________________________________________________________________________________________________________________________________________________________________\n");
			printf("\n ID   \t||\t NAME                \t||\t DEPARTMENT \t||\t DATE OF BIRTH \t||\t PHONE NUMBER \t||\t DATE OF JOIN \t||\t SALARY    \t||\t  \n");
			printf("\n___________________________________________________________________________________________________________________________________________________________________________\n");
			
			printf("\n %s \t||\t %20s \t||\t %s        \t||\t %s    \t||\t %s   \t||\t %s    \t||\t %s \t||\t " ,(ptr+b)->ID , (ptr+b)->name , (ptr+b)->Department, (ptr+b)->DOB, (ptr+b)->Phone,(ptr+b)->DOJ, (ptr+b)->Salary );
			printf("\n____________________________________________________________________________________________________________________________________________________________________________\n");
		 count++;
		}
    }
    if(count==0)
	{
		system("CLS");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
    	printf("\t \t \t NO EMPLOYEE JOINED ON THIS ENTERED DATE");
    	
	}
    
			
getch();
}

void str()
{
   	system("CLS");
	printf("\n****************************************************************************************\n");
	printf("\n--------------------DISPLY DETAILS IF YOU ENTER SOME PART OF NAME-----------------------\n");	
	printf("\n****************************************************************************************\n");
	char abc[20];
	
	int a, b ;
	int count=0;
	printf("\nENTER SOME PART OF NAME  :\t");
	getchar();
	gets(abc);
	
	char *p;
	for(a=0;a<n;a++)
	{
		p = strstr((ptr+a)->name,abc);
		if(p)
		{
			
			b=a;
			printf("\n__________________________________________________________________________________________________________________________________________________________________________\n");
			printf("\n ID   \t||\t NAME                \t||\t DEPARTMENT \t||\t PHONE NUMBER \t||\t DATE OF JOIN \t||\t ADDRESS \n");
			printf("\n___________________________________________________________________________________________________________________________________________________________________________\n");
			
			printf("\n %s \t||\t %20s \t||\t %s        \t||\t %s   \t||\t %s    \t||\t %s" ,(ptr+b)->ID , (ptr+b)->name , (ptr+b)->Department, (ptr+b)->Phone,(ptr+b)->DOJ,(ptr+b)->Address );
			printf("\n____________________________________________________________________________________________________________________________________________________________________________\n");
			count++;
		}
    }
    
    if(count==0)
	{
		system("CLS");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
    	printf("\t \t \t NO EMPLOYEE FOUND");
	}

			
getch();
}
			



