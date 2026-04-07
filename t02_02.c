// 12S25054 - Jessye Carouline Elmayanti Rajagukguk

#include <stdio.h>

int main(int _argv, char **_argc)
{
    int level;
    scanf("%d", &level);

    switch(level) {
        case 1:
            printf("staple food\n");
            printf("you need side dishes\n");
            break;
        case 2:
            printf("side dishes\n");
            printf("staple food\n");
            printf("you need vegetables\n");
            break;
        case 3:
            printf("vegetables\n");
            printf("side dishes\n");
            printf("staple food\n");
            printf("good\n");
            break;
        case 4:
            printf("fruits\n");
            printf("vegetables\n");
            printf("side dishes\n");
            printf("staple food\n");
            printf("very good\n");
            break;
        case 5:
            printf("milk\n");
            printf("fruits\n");
            printf("vegetables\n");
            printf("side dishes\n");
            printf("staple food\n");
            printf("perfect\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
