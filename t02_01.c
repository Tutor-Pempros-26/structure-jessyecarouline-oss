// 12S25054 - Jessye Carouline Elmayanti Rajagukguk


#include <stdio.h>

int main(int _argv, char **_argc)
{
    int jumlah;
    double harga, total, potongan = 0;

    // Input jumlah buku dan harga per buku
    scanf("%d", &jumlah);
    scanf("%lf", &harga);

    // Hitung total belanja
    total = jumlah * harga;

    // Tentukan potongan sesuai aturan
    if (total > 500000) {
        potongan = total * 0.15;
    } else if (total >= 100000) {
        potongan = total * 0.10;
    } else if (total > 50000) {
        potongan = total * 0.05;
    }

    // Output hasil
    if (potongan == 0) {
        printf("---\n");
        printf("%.2lf\n", total);
    } else {
        printf("%.2lf\n", potongan);
        printf("%.2lf\n", total - potongan);
    }

    return 0;
}
