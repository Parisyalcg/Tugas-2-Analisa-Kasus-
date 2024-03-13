#include <stdio.h>
#include <stdlib.h>

int main (){
    int a,b,c;

    printf("Masukkan sisi 1 : ");
    scanf("%d",&a);
    printf("Masukkan sisi 2 : ");
    scanf("%d",&b);
    printf("Masukkan sisi 3 : ");
    scanf("%d",&c);
    
    if (a<=0 || b<=0 || c<=0){
        printf("terdapat nilai yang bukan sisi segitiga");
    }
    else if (a==b&&b==c&&a==c){
        printf("segitiga sama sisi");
    }
    else if (a==b||b==c||a==c){
        printf("segitiga sama kaki");
    }
    else{
        printf("segitiga sembarang");
    }
    return 0;
}    

