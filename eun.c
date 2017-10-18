#include <stdio.h>
int main()
{
	int i;
	char c;

	printf("Enter the number.");

	while((c=getchar())!=EOF)
		for(i=1;i<=c-48;i++)
			printf("%d",c-48);
	
	printf("\n");

return 0;
}