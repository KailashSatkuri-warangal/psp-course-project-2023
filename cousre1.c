#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_USERNAME_LEN 20
#define MAX_PASSWORD_LEN 20
int n;
char b;
typedef struct {
    char username[MAX_USERNAME_LEN + 1];
    char password[MAX_PASSWORD_LEN + 1];
} User;

void login() {
    char username[MAX_USERNAME_LEN + 1];
    char password[MAX_PASSWORD_LEN + 1];

    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your password: ");
    scanf("%s", password);

    FILE* fp = fopen("users.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open file.\n");
        return;
    }

    User user;
    int found = 0;
    while (fread(&user, sizeof(User), 1, fp) == 1) {
        if (strcmp(user.username, username) == 0 && strcmp(user.password, password) == 0) {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (found) {
        printf("Login successful!\n");
		first();
    } else {
        printf("Incorrect username or password.\n");
    }
    
}

void signup() {
    char username[MAX_USERNAME_LEN + 1];
    char password[MAX_PASSWORD_LEN + 1];

    printf("Enter a username: ");
    scanf("%s", username);

    printf("Enter a password: ");
    scanf("%s", password);

    User user;
    strncpy(user.username, username, MAX_USERNAME_LEN);
    strncpy(user.password, password, MAX_PASSWORD_LEN);

    FILE* fp = fopen("users.txt", "a");
    if (fp == NULL) {
        printf("Error: could not open file.\n");
        return;
    }

    fwrite(&user, sizeof(User), 1, fp);

    fclose(fp);

    printf("Account created!\n");
}
char ch;
topic1()
{
	char name[100];
	FILE* fp = fopen("INTRODUCTION TO C lANGUAGE.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	printf("\nPlease try:");
	scanf("%s",name);
	printf("\nOUTPUT:");
	printf("\n%s",name);
	fclose(fp);
}
history()
{
	FILE* fp = fopen("History of C Language.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
}
ifstat()
{
	FILE* fp = fopen("C if Statement.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	printf("\nYOU WANT TO TRY ANY PROBLEMS [1/0]");
	fclose(fp);
	scanf("%d",&n);
	if(n==1)
	{
	problem3();	
	}
	
}
problem3()
{
	printf("\n1.Write a c program of given number is even or odd");
	printf("\n2.Write a c program of given three number biggest of there ");
	printf("\n3.Write a c program of given number is positive or negative if even or odd");
	printf("\n4.Write a c program of given person cast his/her vote");
	printf("\n5.Write a c program of given year is leap or not");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
	{
	FILE* fp = fopen("even2.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
		int number=0;
	printf("\nIf You want to try [1/0]");
		scanf("%d",&n);
				switch(n)
				{
					case 1:
				 	printf("Enter a number:");    
					scanf("%d",&number);    
					if(number%2==0)
					{    
							printf("%d is even number",number);    
					}
					else
					{
						printf("%d is odd number",number); 
					}break;//2.completed 1
				}
	break;
	}
	case 2:
	{
		FILE* fp = fopen("among3.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			{
    int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("Biggest number is %d", a);
    if (b > a && b > c)
        printf("Biggest number is %d", b);
    if (c > a && c > b)
        printf("Biggest number is %d", c);
      }break;	  
	}
}break;
	case 4:
		{
		FILE* fp = fopen("vote.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			{
	int age;
	printf("enter your age: ");
	scanf("%d",&age);
	if(age>=18)
	printf("\n you are elgible to cast your vote...");
	else
	{
	printf("\n sorry ,you are not elgible to cast your vote...");
	printf("still years to cast your vote %d years should wait...",18-age);
}
	}break;
		
	}break;
}
	case 3:
		{ int nu;
			FILE* fp = fopen("pos.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
   
	printf("Input an integer: ");
	scanf("%d",&nu);
	if (nu>0)
	{	
    	if (nu%2==0) 
		{
        	printf("positive even");
    	}
   		 else
	 	{
        	printf("positive odd");
    	}
	}
	else
		{
    		if (nu%2>=0) 
			{
        	printf("negative even");
   			 }
   			 else 
			{
     		  printf("negative odd");
   			 }
		}
	}break;	
	}break;
	case 5:
		{int year;
			FILE* fp = fopen("leap2.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
	printf("enter a number: ");
	scanf("%d",&year);
	if(year%4==0||year%100==0||year%400==0)
	printf("it was leap year: %d ",year);
	else
	printf("not a leap year");
	}break;
}break;
}
}
loop()
{
	FILE* fp = fopen("Looping statement.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	printf("\nYOU WANT TO TRY ANY PROBLEMS [1/0]");
	scanf("%d",&n);
	if(n==1)
	{
	problem4();	
	}
}
int i;
problem4()
{
	printf("\n1.Write a c program to print sum of first n natural numbers using while loop");
	printf("\n2.Write a c program to print sum of first 10 natural numbers using do-while ");
	printf("\n3.Write a c program to print reverse of given number by using while loop ");
	printf("\n4.Write a c program to print  first n natural numbers using for loop");
	printf("\n5.Write a c program to print tables by for loop");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
	{
		
	FILE* fp = fopen("firstn_while.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	
	printf("\nIf You want to try [1/0]");
		scanf("%d",&n);
				switch(n)
				{
					case 1:
				 	{
							printf("Enter the value of n\t");
							scanf("%d", &n);
							printf("Printing natural numbers from 1 to %d\n", n);
							i = 1;
							while(i <= n)
							{
								printf("%d\t", i);
								i++;
							}
							printf("\n");
					 }
					 break;//3.completed 1
				}
	break;
	}
	case 2:
	{
		FILE* fp = fopen("firstn_do-while.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
				 	{
				 		printf("Enter the value of n\t");
			 			scanf("%d", &n);
			 			printf("Printing natural numbers from 1 to %d\n", n);
			 			i = 1;
			 			do
			 			{
			 				printf("%d\t", i);
			 				i++;
			 			}while(i <= n);
			 			printf("\n");	
					 }
					 break;	  
	}break;
}
	case 3:
		{ int reverse = 0, remainder;
		FILE* fp = fopen("reverse_while.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
				 	{
 				  printf("Enter an integer: ");
 				  scanf("%d", &n);
 				  while (n != 0) {
 				    remainder = n % 10;
 				    reverse = reverse * 10 + remainder;
 				    n /= 10;
 				  }
 				  printf("Reversed number = %d", reverse);
					 }
					 break;
		
	}break;
	}
	case 4:
		{ int nu;
			FILE* fp = fopen("firstn_for.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
				 	{
				 			printf("Enter the value of n\t");
				 			scanf("%d", &n);
				 			printf("Printing natural numbers from 1 to %d\n", n);
				 			for(i = 1; i <= n; i++)
				 				printf("%d\t", i);
				 			printf("\n");
					 }
					 break;
	}break;
	}
	case 5:
		{int year;
			FILE* fp = fopen("table_for.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
				 	{
				 	     int n,m,i,j;
				 	    scanf("%d%d",&n,&m);
				 	    for(i=n;i<=m;i++)
				 	    {
				 		    for(j=1;j<=10;j++)
   				 					 	 {
   				 					 	     printf("\n%3d * %3d = %3d",i,j,i*j);
   				 					 	 }
  				 					 	  printf("\n=======================\n");
  				 	    }	
					 }
					 break;
	}break;
	}
}
}

funtion()
{
		FILE* fp = fopen("Functions.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
    fclose(fp);
	printf("\nYOU WANT TO TRY ANY PROBLEMS [1/0]");
	scanf("%d",&n);
	if(n==1)
	{
	problem5();	
	}
}

void sum()  
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);   
    printf("The sum is %d",a+b);  
}
int sum1()  
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);  
    return a+b;   
} 
void sum2(int a, int b)  
{  
    printf("\nThe sum is %d",a+b);      
}
int sum3(int a, int b)  
{  
    return a+b;  
}  
problem5()
 
{
	printf("\n1.Write a c program Function without argument and without return value");
	printf("\n2.Write a c program Function without argument and with return value ");
	printf("\n3.Write a c program Function with argument and without return value ");
	printf("\n4.Write a c program Function with argument and with return value");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
	{
		
	FILE* fp = fopen("sum4.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	
	printf("\nIf You want to try [1/0]");
		scanf("%d",&n);
				switch(n)
				{
					case 1:
				 	{ 
   							 printf("\nGoing to calculate the sum of two numbers:");  
  							  sum(); 
				 }
					 break;//4.completed 1
				}
	break;
	}
	case 2:
	{int result; 
		FILE* fp = fopen("sum4_return.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
				 	{
 				 		     
  				 		  printf("\nGoing to calculate the sum of two numbers:");  
  				 		  result = sum1();  
  				 		  printf("%d",result);  	
					 }
					 break;	  
	}break;
}
	case 3:
		{int a,b,result;  
		FILE* fp = fopen("sum4_without.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
				 	{
    printf("\nGoing to calculate the sum of two numbers:");  
    printf("\nEnter two numbers:");  
    scanf("%d %d",&a,&b);  
    sum2(a,b); 
					 }
					 break;
		
	}break;
	}
	case 4:
		{ int a,b,result; 
			FILE* fp = fopen("sum4_both.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
				 	{
      
    printf("\nGoing to calculate the sum of two numbers:");  
    printf("\nEnter two numbers:");  
    scanf("%d %d",&a,&b);  
    result = sum3(a,b);  
    printf("\nThe sum is : %d",result);  
					 }
					 break;
	}break;
	}
}
}

array()
{
	FILE* fp = fopen("Array .txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);
	printf("\nYOU WANT TO TRY ANY PROBLEMS [1/0]");
	scanf("%d",&n);
	if(n==1)
	{
	problem6();	
	}
}

problem6()
 
{
	printf("\n1.Write a c program simple static declaration of 1D_Array");
	printf("\n2.Write a c program simple dynamic declaration of 1D_Array");
	printf("\n3.Write a c program  simple static declaration of 2D_Array ");
	printf("\n4.Write a c program  simple dynamic declaration of 2D_Array");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
	{
		
	FILE* fp = fopen("array1.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	
	printf("\nIf You want to try [1/0]");
		scanf("%d",&n);
				switch(n)
				{
					case 1:
				 	{ 
						i=0;    
						int marks[5]={20,30,40,50,60}; 
						for(i=0;i<5;i++)
						{      
						printf("%d \n",marks[i]);    
						}    	 
				 	}
					 break;//5.completed 1
				}
	break;
	}
	case 2:
	{ int nums[5];
		FILE* fp = fopen("array2.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
				 	{
				 	    printf("\n Run-Time Initialization Example:\n");
				 	    printf("\n Enter array elements: ");

 				 	   for (i = 0; i < 5; i++)
					   {
 				 	       scanf("%d", & nums[i]);
 				 	   }
				 	    printf("\nPrinting array elements : ");
 				 	   for (i = 0; i < 5; i++) 
						 {
 				 	       printf("%d ", nums[i]);
 				 	   }
  				 		  	
					 }
					 break;	  
	}break;
}
	case 3:
		{
		int j=0;
		FILE* fp = fopen("array2d3.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
				 	{  
    					int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};      
    					for(i=0;i<4;i++)
						{    
     					for(j=0;j<3;j++)
						 {    
     					  printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);    
    					 }    
    					}  
					 }
					 break;
		
	}break;
	}
	case 4:
		{ int j; 
			FILE* fp = fopen("array2d4.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);
	printf("\nIf You want to try [1/0]");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
				 	{printf("\n Run-Time Initialization 3x3 matrix... Example:\n");
      					  int arr[3][3];     
      					      for (i=0;i<3;i++)    
       					     {    
      					          for (j=0;j<3;j++)    
      					          {    
       					             printf("Enter a[%d][%d]: ",i,j);                
      					              scanf("%d",&arr[i][j]);    
      					          }    
      					      }    
       					     printf("\n printing the elements ....\n");     
       					     for(i=0;i<3;i++)    
       					     {    
        					        for (j=0;j<3;j++)    
        					        {    
        					            printf("%d\t",arr[i][j]);    
       					         }   
									printf("\n"); 
        					    }    
					 }
					 break;
	}break;
	}
}
}





sort()
{
	int choice;
	char s[10000],c;
	FILE *fp1;
	        	printf("\n0.History Of C ");
            	printf("\n1.Introduction To C ");
            	printf("\n2.If Control statement");
            	printf("\n3.Loop Control statement");
            	printf("\n4.Functions");
            	printf("\n5.array");
            	scanf("%d", &choice);
            	switch(choice)
            	{
            		case 0:
            			{
            			FILE* fp = fopen("History of C Language.txt", "r");
	if (fp == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
								do{
								ch=fgetc(fp);
								printf("%c",ch);
							}while(ch!=EOF);
							printf("\nYou want rewrite content sir....: ");
							rewind(fp);
	fp1= fopen("temp.txt", "w+");
	if (fp1 == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
	c = fgetc(fp);
	while (c != EOF)
	{
		fputc(c, fp1);
		c = fgetc(fp);
	}
	scanf("%s",s);
            			fprintf(fp1,s);
            			rewind(fp1);
								ch=fgetc(fp1);
								printf("%c",ch);
								fclose(fp);	
								fclose(fp1);
						}
            			break;
            		case 1:{
						
            			FILE* fp = fopen("C if Statement.txt", "r");
	if (fp == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
								do{
								ch=fgetc(fp);
								printf("%c",ch);
							}while(ch!=EOF);
							printf("\nYou want rewrite content sir....: ");
							rewind(fp);
	fp1= fopen("temp.txt", "w+");
	if (fp1 == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
	c = fgetc(fp);
	while (c != EOF)
	{
		fputc(c, fp1);
		c = fgetc(fp);
	}
	scanf("%s",s);
            			fprintf(fp1,s);
            			rewind(fp1);
								ch=fgetc(fp1);
								printf("%c",ch);
								fclose(fp);	
								fclose(fp1);
            			break;
            		}
            		case 2:
            			{
            			FILE* fp = fopen("C if Statement.txt", "r");
	if (fp == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
								do{
								ch=fgetc(fp);
								printf("%c",ch);
							}while(ch!=EOF);
							printf("\nYou want rewrite content sir....: ");
							rewind(fp);
	fp1= fopen("temp.txt", "w+");
	if (fp1 == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
	c = fgetc(fp);
	while (c != EOF)
	{
		fputc(c, fp1);
		c = fgetc(fp);
	}
	scanf("%s",s);
            			fprintf(fp1,s);
            			rewind(fp1);
								ch=fgetc(fp1);
								printf("%c",ch);
								fclose(fp);	
								fclose(fp1);
            			break;
            		}
            		case 3:
            			{
            			FILE* fp = fopen("Looping statement.txt", "r");
	if (fp == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
								do{
								ch=fgetc(fp);
								printf("%c",ch);
							}while(ch!=EOF);
							printf("\nYou want rewrite content sir....: ");
							rewind(fp);
	fp1= fopen("temp.txt", "w+");
	if (fp1 == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
	c = fgetc(fp);
	while (c != EOF)
	{
		fputc(c, fp1);
		c = fgetc(fp);
	}
	scanf("%s",s);
            			fprintf(fp1,s);
            			rewind(fp1);
								ch=fgetc(fp1);
								printf("%c",ch);
								fclose(fp);	
								fclose(fp1);
            			break;
            		}
            		case 4:{
            			FILE* fp = fopen("Functions.txt", "r");
	if (fp == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
								do{
								ch=fgetc(fp);
								printf("%c",ch);
							}while(ch!=EOF);
							printf("\nYou want rewrite content sir....: ");
							rewind(fp);
	fp1= fopen("temp.txt", "w+");
	if (fp1 == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
	c = fgetc(fp);
	while (c != EOF)
	{
		fputc(c, fp1);
		c = fgetc(fp);
	}
	scanf("%s",s);
            			fprintf(fp1,s);
            			rewind(fp1);
								ch=fgetc(fp1);
								printf("%c",ch);
								fclose(fp);	
								fclose(fp1);
						}
            		case 5:
            			{
    FILE* fp = fopen("Array .txt", "r");
	if (fp == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
								do{
								ch=fgetc(fp);
								printf("%c",ch);
							}while(ch!=EOF);
	printf("\nYou want rewrite content sir....: ");
	rewind(fp);
	fp1= fopen("temp.txt", "a+");
	if (fp1 == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
	c = fgetc(fp);
	while (c != EOF)
	{
		fputc(c, fp1);
		c = fgetc(fp);
	}
	scanf("%s",s);
            			fprintf(fp1,s);
            			rewind(fp1);
								ch=fgetc(fp1);
								printf("%c",ch);
								fclose(fp);	
								fclose(fp1);
				}
				}
}
sort_topic()
{
	char topic[100];
	printf("\nwhich topic you want, sir: ");
	scanf("%s",topic);
	if(strcmp(topic,"introduction")==0||strcmp(topic,"INTRODUCTION")==0)
		{
		FILE* fp = fopen("INTRODUCTION TO C lANGUAGE.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	
	}while(ch!=EOF);
	fclose(fp);	
		}
	else if(strcmp(topic,"history")==0)
	{
		FILE* fp = fopen("History of C Language.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);	
	}
	else if (strcmp(topic,"if statement")==0||strcmp(topic,"if")==0||strcmp(topic,"IF")==0)
	{
		FILE* fp = fopen("C if Statement.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);
	}
	else if(strcmp(topic,"loop statement")==0||strcmp(topic,"loop")==0||strcmp(topic,"LOOP")==0)
	{
		FILE* fp = fopen("Looping statement.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);
	}
	else if(strcmp(topic,"function")==0||strcmp(topic,"FUNCTION")==0)
	{
			FILE* fp = fopen("Functions.txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
    fclose(fp);
	}
	else if(strcmp(topic,"array")==0||strcmp(topic,"ARRAY")==0)
	{
		FILE* fp = fopen("Array .txt", "r");
    if (fp == NULL)
	 {
        printf("Error: could not open file.\n");
        return;
    }
    do{
	ch=fgetc(fp);
	printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);
	}
	else
	{
	printf("\nName not found Exiting..............");	
	}
	
}
first()
{
	 int choice;
	do {
            	printf("\n0.History Of C ");
            	printf("\n1.Introduction To C ");
            	printf("\n2.If Control statement");
            	printf("\n3.Loop Control statement");
            	printf("\n4.Functions");
            	printf("\n5.array");
            	printf("\n6.Sorting ");
            	printf("\n7.Sorting topic");
            	printf("\n8.Exit ");
            	scanf("%d", &choice);
            	switch(choice)
            	{
            		case 0:
            			history();
            			break;
            		case 1:
            			topic1();
            			break;
            		case 2:
            			ifstat();
            			break;
            		case 3:
            			loop();
            			break;
            		case 4:
            			funtion();
            			break;
            		case 5:
            			array();
            			break;
            		case 6:
            			sort();
            			break;
            		case 7:
            			sort_topic();
            			break;
            		case 8:
            			printf("\nExit!!!!!!!!!\n");
            			break;
				}
			}while (choice != 8);
}
int main()
{
   int choice;
    do {
        printf("1. Login\n");
        printf("2. Sign up\n");
        printf("3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                login();
                break;
            case 2:
                signup();
                break;
            case 3:
            	printf("\nExit!!!!!!!!!\n");
            	break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
