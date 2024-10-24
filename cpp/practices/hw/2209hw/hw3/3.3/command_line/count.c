#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 666

int  times = 0, length = 0, res = 0; 
char buffer[MAX_LINE];

int cal_times(char keyword[50]);

int main(int argc, char* argv[])
{   
    FILE* fp = fopen(argv[1], "rt");
	printf("\n");

	if ((fp = fopen(argv[1], "rt")) == NULL)
	{
		perror("fail to read");
		exit(1);
	}

	while (fgets(buffer, MAX_LINE, fp) != NULL)
	{  
		length = strlen(buffer);
		buffer[length - 1] = '\0';

        int times = 0;
        int len = strlen(argv[2]);

        char *p = buffer;
        while ((*p) != '\0') {
            int i = strncmp(p, argv[2], len);
            if (i == 0) {
                times++;
            }
        p++;
        }
        res += times;
	}
    printf("There are %d %s in the txt file.\n", res, argv[2]);
    system("pause");
	return 0;
}

