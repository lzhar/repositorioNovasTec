#include<stdio.h>
#include<math.h>

int main(void){
    int i;
    int n; 


    printf("Digite aqui até que numero voce quer ao quadrado: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        if(i % 2 != 0){
            int numAoQuad = pow(i, 2);
            printf("%d%s%d\n", i , " = ", numAoQuad);
        }
    }

    return 0;
}

