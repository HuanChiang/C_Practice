#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *name1[3] = {"Joey", "Cindy", "Paul"};
	char *name2 = "Monkey";
	char name3[5] = {'J', 'O', 'E', 'Y'};

	for (int i=0; i<3; i++) 
	{
		printf("%s\n", name1[i]);	
	}


	for(int i=0;i<3;i++)
	{
		int j=0;
		while (name1[i][j] != '\0') 
		{
			printf("%c", name1[i][j]);
			j++;
		}
		printf("\n");
	}
	
	
	return 0;
}