#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 666

char keyword[50];
int  times = 0;
char buffer[MAX_LINE];

void input();
int cal_times(char keyword[50]);

int main(int argc, char* argv[])
{   
	char* s[50];
    printf("Please input the txt fprmat file.\n");
    scanf("%s",&s);

    FILE* fp = fopen(s, "rt");
	printf("\n");

	if ((fp = fopen(s, "rt")) == NULL)
	{
		perror("fail to read");
		exit(1);
	}

    input();

    int length = 0, res = 0; 
	while (fgets(buffer, MAX_LINE, fp) != NULL)
	{  
		length = strlen(buffer);
		buffer[length - 1] = '\0';

        res += cal_times(keyword);
	}
    printf("There are %d %s in the txt file.\n", res, keyword);
    system("pause");
	return 0;
}

void input() {
    printf("Please input a keyword.\n");
    scanf("%s",keyword);
    return;
}

int cal_times(char keyword[50]) {
    int times = 0;
    int len = strlen(keyword);

    char *p = buffer;
    while ((*p) != '\0') {
        int i = strncmp(p, keyword, len);
        if (i == 0) {
            times++;
        }
        p++;
    }
    return times;
}