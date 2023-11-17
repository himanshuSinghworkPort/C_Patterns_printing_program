#include<stdio.h>
#include<conio.h>	
#include<stdlib.h>	
//#include<math.h>
#include<string.h>	
#include<time.h>
#include<windows.h>
// password is himanshu


int main_exit;
void menu();



void main()
{
char pass[10],password[10]="himanshu";
int i=0;
printf("ENTER THE PASSWORD TO LOGIN.....");
scanf("%s",pass);
if(strcmp(pass,password)==0)
	{
	printf("\n\npassword match\n LOADING");
		for(i=0;i<=7;i++)
		{
		fordelay(10000000);
		printf(".");
		}
		system("cls");
		menu();
	}
else
	{
	printf("\n\n wrong password");
	printf("\n");
	login_try:
	printf("enter 1 to try again and 0 to exit:");
	scanf("%d",&main_exit);
	if(main_exit==1)
		{
		system("cls");
		main();
		
		}
	else if (main_exit==0)
		{
		system("cls");
		close();
		}
	else
	{
	printf("invalid");
	fordelay(100000000);
	system("cls");
	goto login_try;
	}
	}
getch();

}


void fordelay(int j)
	{
	int i,k;
	for(i=0;i<j;i++)
	k=i;
	}
void close(void)
	{
	printf("\n\n\n\t\t\t @ program by himanshu!!!!!!@");
	}

void menu(void)
	{
	int choice;
	system("cls");
	system("color 0A");
	printf("\n\n\t\t\t\t\t\t @ pattern printing programs!!!!!!");
	printf("\n\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\t\t\t\t\t 1.Right Half Pyramid Pattern\n");
	printf("\n\t\t\t\t\t 2.Left Half Pyramid Pattern \n");
	printf("\n\t\t\t\t\t 3.Full Pyramid Pattern \n");
	printf("\n\t\t\t\t\t 4.Inverted Right Half Pyramid Pattern \n");
	printf("\n\t\t\t\t\t 5.Inverted Left Half Pyramid Pattern \n");
	printf("\n\t\t\t\t\t 6.Inverted Full Pyramid Pattern \n");
	printf("\n\t\t\t\t\t 7.Rhombus Pattern \n");
	printf("\n\t\t\t\t\t 8.Diamond Pattern \n");
	printf("\n\t\t\t\t\t 9.Hourglass Pattern \n");
	printf("\n\t\t\t\t\t 10.Hollow Square Pattern \n");
	printf("\n\t\t\t\t\t 11.Hollow Full Pyramid Pattern \n");
	printf("\n\t\t\t\t\t 12.Hollow Inverted Full Pyramid Pattern \n");
	printf("\n\t\t\t\t\t 13.Hollow Diamond Pattern \n");
	printf("\n\t\t\t\t\t 14.Hollow Hourglass Pattern \n");
	printf("\n\t\t\t\t\t 15.Floyd’s Triangle Pattern \n");
	printf("\n\t\t\t\t\t 16.Pascal’s Triangle Pattern \n");
	printf("\n\t\t\t\t\t 17.CLOSE \n");
	scanf("%d",&choice);
	system("cls");
	switch(choice)
		{
		case 1: pattern1();
		break;	
		case 2: pattern2();
		break;
		case 3: pattern3();
		break;
		case 4: pattern4();
		break;
		case 5: pattern5();
		break;
		case 6: pattern6();
		break;
		case 7: pattern7();
		break;
		case 8: pattern8();
		break;
		case 9: pattern9();
		break;
		case 10: pattern10();
		break;
		case 11: pattern11();
		break;
		case 12: pattern12();
		break;
		case 13: pattern13();
		break;
		case 14: pattern14();
		break;
		case 15: pattern15();
		break;
		case 16: pattern16();
		break;
		case 17: close();
		break;
		
		
		
		
		
		
		}

	}

void pattern1()
	{
	
    	int rows = 5; 
  
    	// first loop for printing rows 
    	for (int i = 0; i < rows; i++) 
		{ 
  
        	// second loop for printing number in each rows 
        	for (int j = 0; j <= i; j++)
			 { 
            		printf("%d ", j + 1); 
        		} 
        	printf("\n"); 
    		} 
	}

void pattern2()
	{
	int rows = 5; 
  
    	// first loop is for printing the rows 
    	for (int i = 0; i < rows; i++) { 
  
        // loop for printing leading whitespaces 
        for (int j = 0; j < 2 * (rows - i) - 2; j++) { 
            printf(" "); 
        } 
  
        // loop for printing continious numbers 
        for (int k = 0; k <= i; k++) { 
            printf("%d ", k + 1); 
        } 
        printf("\n"); 
   	 } 
    	
	}


void pattern3()
	{
	int rows = 5; 
  
    	// first loop to print all rows 
    	for (int i = 0; i < rows; i++) { 
  
        // inner loop 1 to print white spaces 
        for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
            printf(" "); 
        } 
  
        // inner loop 2 to print alphabets 
        for (int k = 0; k < 2 * i + 1; k++) { 
            printf("%c ", 'A' + k); 
        } 
        printf("\n"); 
    	} 
    	
	}
		

void pattern4()
	{
	int rows = 5; 
  
    // first loop to print all rows 
    for (int i = 0; i < rows; i++) { 
  
        // first inner loop to print the numbers in each row 
        for (int j = 0; j < rows - i; j++) { 
            printf("%d ", j + 1); 
        } 
        printf("\n"); 
    } 
    	
	}
		


void pattern5()
	{
	int rows = 5; 
  
    // first loop for printing all rows 
    for (int i = 0; i < rows; i++) { 
  
        // first inner loop for printing white spaces 
        for (int j = 0; j < 2 * i; j++) { 
            printf(" "); 
        } 
  
        // second inner loop for printing numbers 
        for (int k = 0; k < rows - i; k++) { 
            printf("%d ", k + 1); 
        } 
        printf("\n"); 
    } 
    	
	}
		
void pattern6()
	{
	 int rows = 5; 
  
    // first loop for printing all rows 
    for (int i = 0; i < rows; i++) { 
  
        // first inner loop for printing leading white 
        // spaces 
        for (int j = 0; j < 2 * i; j++) { 
            printf(" "); 
        } 
  
        // second inner loop for printing numbers 
        for (int k = 0; k < 2 * (rows - i) - 1; k++) { 
            printf("%d ", k + 1); 
        } 
        printf("\n"); 
    } 
    	
	}
		
void pattern7()
	{
	int rows = 5; 
  
    // first outer loop to iterate through each row 
    for (int i = 0; i < rows; i++) { 
  
        // first inner loop to print white spaces 
        for (int j = 0; j < rows - i - 1; j++) { 
            printf(" "); 
        } 
  
        // second inner loop to print number in each row 
        for (int k = 0; k < rows; k++) { 
            printf("%d ", k + 1); 
        } 
        printf("\n"); 
    } 
    	
	}
		
void pattern8()
	{
	int n = 5; 
  
    // first outer loop to iterate through each row 
    for (int i = 0; i < 2 * n - 1; i++) { 
  
        // assigning values to the comparator according to 
        // the row number 
        int comp; 
        if (i < n) { 
            comp = 2 * (n - i) - 1; 
        } 
        else { 
            comp = 2 * (i - n + 1) + 1; 
        } 
  
        // first inner loop to print leading whitespaces 
        for (int j = 0; j < comp; j++) { 
            printf(" "); 
        } 
  
        // second inner loop to print number 
        for (int k = 0; k < 2 * n - comp; k++) { 
            printf("%d ", k + 1); 
        } 
        printf("\n"); 
    } 
    	
	}
		
void pattern9()
	{
	int rows = 5; 
  
    // first outer loop to iterate each row 
    for (int i = 0; i < 2 * rows - 1; i++) { 
  
        // assigning comparator 
        int comp; 
        if (i < rows) { 
            comp = 2 * i + 1; 
        } 
        else { 
            comp = 2 * (2 * rows - i) - 3; 
        } 
  
        // first inner loop to print leading spaces 
        for (int j = 0; j < comp; j++) { 
            printf(" "); 
        } 
  
        // second inner loop to print number 
        for (int k = 0; k < 2 * rows - comp; k++) { 
            printf("%d ", k + 1); 
        } 
        printf("\n"); 
    } 
    	
	}
		
void pattern10()
	{
	 int rows = 5; 
  
    // outer loop to iterator through each row 
    for (int i = 0; i < rows; i++) { 
  
        // inner loop to print number in each row 
        for (int j = 0; j < rows; j++) { 
            // statement to check boundry condition 
            if (i > 0 && i < rows - 1 && j > 0 
                && j < rows - 1) { 
                printf("  "); 
            } 
            else { 
                printf("%d ", j + 1); 
            } 
        } 
        printf("\n"); 
    } 
    	
	}
		
void pattern11()
	{
	
    int rows = 5; 
  
    // first outer loop to iterate through each loop 
    for (int i = 0; i < rows; i++) { 
  
        // first inner loop to print leading whitespaces 
        for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
            printf(" "); 
        } 
  
        // second inner loop to print numbers and inner 
        // whitespaces 
        for (int k = 0; k < 2 * i + 1; k++) { 
            if (k == 0 || k == 2 * i || i == rows - 1) { 
                printf("%d ", k + 1); 
            } 
            else { 
                printf("  "); 
            } 
        } 
        printf("\n"); 
    } 
    	
	}
		
void pattern12()
	{
	 int rows = 5; 
  
    // first loop iterating through each row 
    for (int i = 0; i < rows; i++) { 
  
        // first inner loop to print leading white space 
        for (int j = 0; j < 2 * i + 1; j++) { 
            printf(" "); 
        } 
  
        // second inner loop to print number and hollow 
        // white space 
        for (int k = 0; k < 2 * (rows - i) - 1; k++) { 
            if (k == 0 || k == 2 * (rows - i) - 2 || i == 0) 
                printf("%d ", k + 1); 
            else { 
                printf("  "); 
            } 
        } 
        printf("\n"); 
    } 
    	
	}
		
void pattern13()
	{
	int n = 5; 
  
    // first outer loop to iterator through each row 
    for (int i = 0; i < 2 * n - 1; i++) { 
        // assigning values to the comparator according to 
        // the row number 
        int comp; 
        if (i < n) { 
            comp = 2 * (n - i) - 1; 
        } 
        else { 
            comp = 2 * (i - n + 1) + 1; 
        } 
  
        // first inner loop to print leading whitespaces 
        for (int j = 0; j < comp; j++) { 
            printf(" "); 
        } 
  
        // second inner loop to print number and inner 
        // whitespaces 
        for (int k = 0; k < 2 * n - comp; k++) { 
            if (k == 0 || k == 2 * n - comp - 1) { 
                printf("%d ", k + 1); 
            } 
            else { 
                printf("  "); 
            } 
        } 
        printf("\n"); 
    } 
    	
	}
		
void pattern14()
	{
	int n = 5; 
  
    // first outer loop to iterate through each row 
    for (int i = 0; i < 2 * n - 1; i++) { 
  
        // assigning comparator 
        int comp; 
        if (i < n) { 
            comp = 2 * i + 1; 
        } 
        else { 
            comp = 2 * (2 * n - i) - 3; 
        } 
  
        // first inner loop to print leading whitespaces 
        for (int j = 0; j < comp; j++) { 
            printf(" "); 
        } 
  
        // second inner loop to print number and inner 
        // whitespaces 
        for (int k = 0; k < 2 * n - comp; k++) { 
            if (k == 0 || k == 2 * n - comp - 1 || i == 0 
                || i == 2 * n - 2) { 
                printf("%d ", k + 1); 
            } 
            else { 
                printf("  "); 
            } 
        } 
        printf("\n"); 
    } 
    	
	}
		
void pattern15()
	{
	 int rows = 4; 
    int n = 1; 
  
    // outer loop to print all rows 
    for (int i = 0; i < rows; i++) { 
  
        // innter loop to print abphabet in each row 
        for (int j = 0; j <= i; j++) { 
            printf("%d ", n++); 
        } 
        printf("\n"); 
    } 
    	
	}
		
void pattern16()
	{
	 int rows = 5; 
  
    // outer loop for rows 
    for (int i = 1; i <= rows; i++) { 
  
        // inner loop 1 for leading white spaces 
        for (int j = 0; j < rows - i; j++) { 
            printf(" "); 
        } 
  
        int C = 1; // coefficient 
  
        // inner loop 2 for printing numbers 
        for (int k = 1; k <= i; k++) { 
            printf("%d ", C); 
            C = C * (i - k) / k; 
        } 
        printf("\n"); 
    } 
    	
	}
		

















