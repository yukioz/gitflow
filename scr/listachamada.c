#include <stdio.h>

int main(){

    int lista[100002];
    int turma, i, valor, aux=1, j;
    int total=0;

    scanf("%d", &turma);

    for(i=0; i<turma; i++){
        
        scanf("%d", &valor);

        lista[i] = valor;

        for(aux=1, j=i-1; j>=0; j--){
            if(valor == lista[j]){
                aux = 0;
                break;
            }
        }
        
        total = total + aux;
        
    }

    printf("%d\n", total);

    return 0;
}