#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 666

int main() {
    printf("Plaese input a sentence(MAX_Length 100).\n");
    char s[MAX];
    fgets(s, MAX, stdin);

    printf("Please input a keyword.\n");
    char keyword[100];
    scanf("%s",keyword);

    int times = 0;
    int len = strlen(keyword);
    char *p = s;
    while ((*p) != '\0') {
        int i = strncmp(p, keyword, len);
        if (i == 0) {
            times++;
        }
        p++;
    }

    printf("\n");
    printf("There are %d %s in the input sentence.\n", times, keyword);

    system("pause");
    return 0;
}
