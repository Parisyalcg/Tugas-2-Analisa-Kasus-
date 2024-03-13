#include <stdio.h>

int main(){

    int i;
    printf("Masukkan nilai i:");
    scanf("%d", &i);

    if (i == 0){
        printf("Bilangan 0");
    } else if (i > 0){
        printf("Bilangan bulat positif");
    } else {
        printf("Bilangan bulat negatif");
    }

    return 0;

}