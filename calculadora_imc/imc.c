#include <stdio.h>

int main(){
    int peso;
    printf("Diga seu peso: ");
    scanf("%d,", &peso);

     int altura;
    printf("Digite sua altura: ");
    scanf("%d,", &altura);

    double altura_final = altura / 100.0;
    double imc = peso / (altura_final * altura_final);

    printf("O seu IMC é de %.2f,", imc);
    return 0;
}
