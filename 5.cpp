#include <stdio.h>

int main() {
    int num1, num2, soma, subtracao, multiplicacao;
    float divisao;

    
    printf("digite o primeiro n�mero: ");
    scanf("%d", &num1);

    
    printf("digite o segundo n�mero: ");
    scanf("%d", &num2);

    
    if (num2 != 0) {
        
        divisao = (float)num1 / num2;
        printf("a divis�o dos n�meros %d e %d �: %.2f\n", num1, num2, divisao);
    } else {
        printf("n�o � poss�vel dividir por zero.\n");
    }

    
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    
    printf("a soma dos n�meros %d e %d �: %d\n", num1, num2, soma);
    printf("a subtra��o dos n�meros %d e %d �: %d\n", num1, num2, subtracao);
    printf("a multiplica��o dos n�meros %d e %d �: %d\n", num1, num2, multiplicacao);

    return 0;
}

