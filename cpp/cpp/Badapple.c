#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib");


#define FALSE 0
#define TRUE 1

#define LENGTH 80 + 1
#define WIDTH 24

#define FRAME_NUM 30
#define PICTURE_NUM 6572
#define INTERVEL 27

int main() {
    mciSendString("open BadApple.mp3 alias song", NULL, 0, NULL);
    mciSendString("play song repeat", NULL, 0, NULL);

    char picture[LENGTH];
    int check;
    char filename[] = "out//0001.txt";
    char pa[] = "0001";
    FILE *fp = NULL;
    clock_t code_start, code_finish;

    system("cls");

    for (int i = 1; i <= PICTURE_NUM; i++) {

        code_start = clock();

        strcpy(filename, "out//");
        sprintf(pa, "%4d", i);

        for(int j = 0; j < (4 - 1); j++) {
            pa[j] = (pa[j] == ' ') ? '0' : pa[j];
        }

        strcat(filename, pa);
        strcat(filename, ".txt");

        fp = fopen(filename, "rt+");

        if (NULL == fp) {
            perror("fopen");
        }   

        for( int j = 1; j <= WIDTH; j++) {
            fgets(picture, LENGTH, fp);
            printf("\t");
            fputs(picture, stdout);
        }

        check = fclose(fp);

        if (check == FALSE) {
            error("fclose");

        }

        code_finish = clock();

        Sleep(INTERVEL - (code_start - code_finish));

        for(int j = 1; j <= WIDTH + 1;j++){
            printf("\033[1A");
        }
    }
    micSendString("close song", NULL, 0, NULL);
    getchar();
    return 0;
}


