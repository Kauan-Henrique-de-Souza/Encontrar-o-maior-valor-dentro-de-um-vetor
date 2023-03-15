#include <stdio.h>

int main()
{
    #define TAM_MAX 10
    
    int Vet1 [TAM_MAX];
    int Maior;
    int i;
    
    for(i=0; i<TAM_MAX; i++)
        scanf("%d",&Vet1 [i]); // le os dados
       
    Maior = Vet1 [0]; // assume que o primeiro é o maior 
     for (i=0; i<TAM_MAX; i++)
          if (Vet1[i] > Maior)
          Maior = Vet1[i];
        
    printf("O maior elemento é %d\n", Maior);

    return 0;
}
