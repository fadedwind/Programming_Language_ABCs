// Input: Someone’s salary 𝑆.
// Output: Individual income tax 𝑇.

#include <stdio.h>
#include <stdlib.h>

void tax_cal(double S);
void run_quit_check();

int main(){
    while (1) {
        double S;
        tax_cal(S);
        run_quit_check();
    }
    return 0;
}

void tax_cal(double S) {
    double T;
    printf("Please enter your sarlary.\n");
    scanf("%lf",&S);

    if(S <= 5000){T = 0;}
    else if (5000 <S && S <= 8000){ T = 0.03*(S - 5000.0);}
    else if (8000 <S && S <= 17000){ T = 90.0 + 0.1*(S - 8000.0);}
    else if (17000 <S && S <= 30000){ T = 990.0 + 0.2*(S - 17000.0);}
    else if (30000 <S && S <= 40000){ T = 3590.0 + 0.25*(S - 30000.0);}
    else if (40000 <S && S <= 60000){ T = 6090.0 + 0.3*(S - 40000.0);}
    else if (60000 <S && S <= 85000){ T = 12090.0 + 0.35*(S - 60000.0);}
    else{ T = 20840.0 + 0.45*(S - 85000.0);}

    printf("You have to pay tax %lf.\n",T);
    fflush(stdin);
}

void run_quit_check() {
    printf("Press x to exit.Other input means countine running the program.\n");
    char a;
    scanf("%c",&a);
    if (a == 'x')
            exit(0);
    fflush(stdin);
}
