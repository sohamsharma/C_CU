/* Demonstration of dynamic allocation of memory */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, *ptr,option,num1;
	a: printf("\nPress 1 to Input Mini Inventory, Press 2 to Input Micro Inventory, Press 3 to Input SUV Inventory, Press 4 to Exit:");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{
				printf("\nEnter number of Mini cars: ");
			    scanf("%d", &num);
			
			    ptr = (int*) malloc(num * sizeof(int));  //memory allocated using malloc
			    if(ptr == NULL)                     
			    {
			        printf("\nError memory not allocated!");
			        exit(0);
			    }
			
			    printf("\nEnter engine size of Mini cars:\n ");
			    for(i = 0; i < num; ++i)
			    {
			        scanf("%d", ptr + i);
			    }
			
			    printf("\nThe engine size of Mini cars is:\n ");
			    for(i = 0; i < num; ++i)
			    {
			        printf("%d\n", *(ptr + i));
			    }
			    
			    free(ptr);
			    goto a;
			}
		case 2:
			{
				printf("\nEnter number of Micro cars: ");
			    scanf("%d", &num);
			
			    ptr = (int*) calloc(num, sizeof(int));  //memory allocated using calloc
			    if(ptr == NULL)                     
			    {
			        printf("\nError memory not allocated!");
			        exit(0);
			    }
			
			    printf("\nEnter engine size of Micro cars:\n ");
			    for(i = 0; i < num; ++i)
			    {
			        scanf("%d", ptr + i);
			    }
			
			    printf("\nThe engine size of Micro cars is:\n ");
			    for(i = 0; i < num; ++i)
			    {
			        printf("%d\n", *(ptr + i));
			    }
			    
			    free(ptr);
				goto a;	
			}
		case 3:
			{
			    printf("\nEnter number of Luxury cars: ");
			    scanf("%d", &num);
			
			    ptr = (int*) malloc(num * sizeof(int)); // Memory allocated using malloc
			    
			    if(ptr == NULL)                     
			    {
			        printf("\nError memory not allocated!");
			        exit(0);
			    }
			
			    printf("\nEnter engine size of Luxury cars:\n ");
			    for(i = 0; i < num; ++i)
			    {
			        scanf("%d", ptr + i);
			    }
			
			    printf("\nThe engine size of Luxury cars is:\n ");
			    for(i = 0; i < num; ++i)
			    {
			        printf("%d\n", *(ptr + i));
			    }
			
			    printf("\nEnter new number of Luxury cars: ");
			    scanf("%d", &num1);
			    ptr = realloc(ptr, num1); // Reallocation of memory

				printf("\nEnter new engine size of Luxury cars:\n ");
			    for(i = 0; i < num1; ++i)
			    {
			        scanf("%d", ptr + i);
			    }
			
			    printf("\nThe new engine size of Luxury cars is:\n ");
			    for(i = 0; i < num1; ++i)
			    {
			        printf("%d\n", *(ptr + i));
			    }
			    free(ptr);
				
				goto a;
			}
		case 4:
			{
				printf("\nSystem will now exit!");
				return 0;
			}
		default:
			{
				printf("\nInvalid Input.");
				goto a;
			}
	}
    return 0;
}
