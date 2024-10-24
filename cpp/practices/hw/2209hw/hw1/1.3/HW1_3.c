// Given a character (e.g. C) as a password. When feeding a correct password from the
// keyboard, the screen shows ”Successful Verification”. Otherwise, the screen prints ”The
// password is incorrect”. In particular, if someone enters wrong password more than T
// times, the program will alert ”Exceeded maximum number of attempts”.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char Default_PW[20] = "222";
    char password[20];

    int len = strlen(Default_PW);
    int attempts = 0;
    int T = 5; 

    while(attempts<T) {
        printf("Please enter your password. \n");
        attempts++;
        scanf("%s",password);
        if (strncmp(password, Default_PW, len) == 0) {
            printf("Successful Verification. \n");
            break;
        }
        else
        {
            if (attempts<T) {
                printf("The password is incorrect. Yor have %d times to try.\n",T-attempts);
            }else{
                printf("Exceeded maximum number of attempts.\n",T-attempts);
            }
        }
    }
    system("pause");
    return 0;
}