/* Bitwise Operator*/

	
#include <stdio.h>

void display(){
	printf("mini = 0011 1100\n");
	printf("micro = 0000 1101\n\n");	
}

int main() {
	
	int option;		
	display();
	unsigned int a = 60; 
	unsigned int b = 13;
	int c = 0;
	int *ptr=&a;
a:	printf("\nPress 1 for & operation, 2 for | operation, 3 for ^ operator, 4 for ~ operator, 5 for << operator, 6 for >> operator, 7 to exit:");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{
				display();
				//And Operator.
				c = a & b; 
				printf("a & b is %d = 0000 1100\n", c );
				goto a;
			}
		case 2:
			{
				display();
				//Or Operator.
				c = a | b; 
				printf("a | b is %d = 0011 1101\n", c );
				goto a;
			}
		case 3:
			{
				display();
				c = a ^ b;
				printf("a ^ b is %d = 0011 0001\n", c );
				goto a;
			}
		case 4:
			{
				display();
				//Complement Operator.
				c = ~(*ptr);
				printf("~a is %d = 1100 0011\n", c );	
				goto a;
			}
		case 5:
			{
				display();	
				// Left Shift Operator. 
				c = a << 2;
				printf("a << b is %d = 1111 0000\n", c );	
				goto a;
			}
		case 6:
			{
				display();
				// Right Shift Operator. 
				c = a >> 1;
				printf("%d", c);
				printf("a >> b is %d = 0000 1111\n", c );
				goto a;	
			}
		case 7:
			{
				exit(0);
			}
		default:
			{
				printf("Invalid Input\n");
				goto a;	
			}	
	}
return 0;
}	
