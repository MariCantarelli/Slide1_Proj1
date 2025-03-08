#include <stdio.h> 

int soma(int valor1, int valor2){
    int resultado;
    resultado = valor1 + valor2;
    return resultado;
}

int main(){
    int resultado; 
    resultado = soma(3, 4);
    printf("3 + 4 = %d\n", resultado);
}