#include <stdio.h>

int main(){

    int nomorHari;

    printf("Masukkan nomor hari 1-7:", nomorHari);
    scanf("%d", &nomorHari);

    if (nomorHari == 1){
        printf("Senin/n");
    }
    else if (nomorHari == 2){
        printf("Selasa/n");
    }
    else if (nomorHari == 3){
        printf("Rabu/n");
    }
    else if (nomorHari == 4){
        printf("Kamis/n");
    }
    else if (nomorHari == 5){
        printf("Jmuat/n");
    }
    else if (nomorHari == 6){
        printf("Sabtu/n");
    }
    else if (nomorHari == 7){
        printf("Minggu/n");
    }
    else {
        printf("Masukkan nomor hari tidak tepat");
    }
return 0;    
}