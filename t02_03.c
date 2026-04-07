// 12S25054 - Jessye Carouline Elmayanti Rajagukguk

#include <stdio.h>

int main(int _argv, char **_argc)
{
    char op;
    int num, count = 0;
    int result;

    // Input operator
    scanf(" %c", &op);

    // Inisialisasi nilai awal sesuai operator
    if (op == '+') result = 0;
    else if (op == '-') result = 0;
    else if (op == '*') result = 1;
    else {
        printf("Invalid operator\n");
        return 0;
    }

    // Loop input bilangan
    while (1) {
        scanf("%d", &num);
        count++;

        // Jika input -1 atau sudah lebih dari 5 kali, keluar
        if (num == -1 || count > 5) {
            printf("%d\n", num);
            printf("0\n");
            break;
        }

        // Cetak operator
        printf("%c\n", op);

        // Operasi pertama
        if (count == 1) {
            printf("%d\n", num);
            if (op == '+') result = result + num;
            else if (op == '-') result = result - num;
            else if (op == '*') result = result * num;
            printf("%d\n", result);
        } else {
            // Operasi berikutnya
            printf("%d\n", num);
            if (op == '+') result = result + num;
            else if (op == '-') result = result - num;
            else if (op == '*') result = result * num;
            printf("%d\n", result);
        }
    }

    return 0;
}
