#include <stdio.h>

int main()
{
    int fibonacci_n1 = 0, fibonacci_n2 = 1, fibonacci_prox;
    int numero, eh_fibonacco = 0;
    int prox = 0;
    
    scanf("%d", &numero);
    
    if(numero == 0 ||numero == 1){
        eh_fibonacco = 1;
    }else{
        while(prox < numero){
            prox = fibonacci_n1 + fibonacci_n2;
            if(numero == prox){
                eh_fibonacco = 1;
                break;
            }
            fibonacci_n1 = fibonacci_n2;
            fibonacci_n2 = prox;
        }
    }
    
    if(eh_fibonacco)
        printf("O número %d pertence a sequencia de Fibonacci!", numero);
    else
        printf("O número %d não pertence a sequencia de Fibonacci!", numero);

    return 0;
}
