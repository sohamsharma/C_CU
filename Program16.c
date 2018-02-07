	#include<stdio.h>

	int main()
	{
		FILE *ptr_file;
		int x,option;
		char buf[1000];
		char mini[100];
a:		printf("\nSelect 1 for inputting mini cars, 2 for saving, 3 for viewing, 4 to append and 5 to exit:\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				{
					printf("\n Input cars seperated by ;\n");
					getchar();
					gets(mini);
					goto a;
					
				}
			case 2:
				{
					printf("\nData Saved\n");
					ptr_file =fopen("output.txt", "w");
					if (!ptr_file)
					return 1;
					fprintf(ptr_file,"%s\n", mini);
					fclose(ptr_file);
					goto a;
				}
			case 3:
				{
		    		ptr_file =fopen("output.txt","r");
		    		if (!ptr_file)
		        	return 1;
		    		while (fgets(buf,1000, ptr_file)!=NULL)
					printf("%s",buf);
					fclose(ptr_file);
					goto a;
				}
			case 4:
				{
					printf("\nData Updated\n");
					ptr_file =fopen("output.txt", "a");
					if (!ptr_file)
					return 1;
					fprintf(ptr_file,"%s\n", mini);
					fclose(ptr_file);
					goto a;
				}
			case 5:
				{
					exit(0);
				}
			default:
				{
					printf("\nInvalid Input");
					goto a;	
				}
		}
		return 0;
	}
