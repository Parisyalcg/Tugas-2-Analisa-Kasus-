#include <stdio.h>
#include <stdlib.h>

int main (){
    //Kamus
    int iA,iB;
    char c;

    //Algoritma
    printf("Masukkan iA : ");
    scanf("%d",&iA);
    printf("Masukkan iB : ");
    scanf("%d",&iB);
    printf("Masukkan character : ");
    scanf(" %c",&c);
switch(c){
        case 'a':
        printf("hasil dari iA+iB adalah %d", iA+iB);
        break;
        case 'b':
        printf("hasil dai iA-iB adalah %d", iA-iB);
        break;
        case 'c':
        printf("hasil dari iA*iB adalah %d", iA*iB);
        break;
        case 'd':
        printf("hasil dari iA/iB adalah %.2f", (float) iA/iB);
        break;
        case 'e':
        printf("hasil dari iA div iB adalah %d", iA/iB);
        break;
        case 'f':
        printf("hasil dari iA mod iB adalah %d", iA%iB);
        break;
        default:
        printf("bukan pilihan menu yang benar");
        break;

    }
    return 0;
}