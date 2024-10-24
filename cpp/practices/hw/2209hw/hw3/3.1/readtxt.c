
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_LINE 666
 
int main(int argc, char* argv[])
{
	
	char* s[100];
    printf("Please input the txt fprmat file.\n");
    scanf("%s",&s);
    FILE* p = fopen(s, "rt");
	printf("\n");

    char buffer[MAX_LINE];  
    int len;

	if ((p = fopen(s, "rt")) == NULL)
	{
		perror("fail to read");
		exit(1);
	}

	while (fgets(buffer, MAX_LINE, p) != NULL)
	{
		len = strlen(buffer);
		buffer[len - 1] = '\0'; 
		printf("%s %d\n", buffer, len);
	}

	printf("\n");
    system("pause");
	return 0;
	
}