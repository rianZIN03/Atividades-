#include <stdio.h>

int main() {
  float baseMaior, baseMenor, altura, area;
  printf("Digite o comprimento da base maior do trap�zio: ");
    scanf("%f", &baseMaior);
    printf("Digite o comprimento da base menor do trap�zio: ");
    scanf("%f", &baseMenor);
    printf("Digite a altura do trap�zio: ");
    scanf("%f", &altura);
    area = ((baseMaior + baseMenor) * altura) / 2.0;
    printf("A �rea do trap�zio �: %.2f\n", area);
}
