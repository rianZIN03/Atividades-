#include <stdio.h>

int main() {
  float temperaturaCelsius, temperaturaFahrenheit;
  printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);
    temperaturaCelsius = (temperaturaFahrenheit - 32) * 5/9;
    printf("A temperatura em Celsius �: %.2f\n", temperaturaCelsius);
      return 0;

}
