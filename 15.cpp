#include <stdio.h>

int main() {
  float quilometrosRodados, litrosCombustivel, consumo;
   printf("Digite os quil�metros rodados: ");
    scanf("%f", &quilometrosRodados);
    printf("Digite a quantidade de litros de combust�vel: ");
    scanf("%f", &litrosCombustivel);
    consumo = quilometrosRodados / litrosCombustivel;
    printf("O consumo do carro � de %.2f quil�metros por litro\n", consumo);
    return 0;
}
