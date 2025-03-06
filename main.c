#include<stdio.h>

int main(void){

    int meusNumeros[5];
    int contador = 0;
    int i;    
    int j;

    for(i = 0; i < 5; i++){
        printf("Digite aqui o numero: ");
        scanf("%d", &meusNumeros[i]);
        contador++;
    }


    for(j=0; j<contador; j++){
        printf("%d%s",meusNumeros[j], "   ");
    }
    
    return 0;

}

