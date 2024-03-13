#include <stdio.h>

int main(){
    int angkaBulan;

    scanf("%d", &angkaBulan);

    if (angkaBulan == 1){
        printf("Januari");
    }
    else if (angkaBulan == 2){
        printf("Februari");
    }
    else if (angkaBulan == 3){
        printf("Maret");
    }
    else if (angkaBulan == 4){
        printf("April");
    }
    else if (angkaBulan == 5){
        printf("Mei");
    }
    else if (angkaBulan == 6){
        printf("Juni");
    }
    else if (angkaBulan == 7){
        printf("Juli");
    }
    else if (angkaBulan == 8){
        printf("Agustus");
    }
    else if (angkaBulan == 9){
        printf("September");
    }
    else if (angkaBulan == 10){
        printf("Oktober");
    }
    else if (angkaBulan == 11){
        printf("November");
    }
    else if (angkaBulan == 12){
        printf("Desember");
    }
    else{
        printf("Masukkan nomor bulan tidak tepat");
    }

    return 0;
}
