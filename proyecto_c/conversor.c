#include <stdio.h>

void divisa_convertida(double cantidad, int de_divisa, int a_divisa) {
    double conversion[3][3] = {
        {1.0, 0.13, 0.12}, // Quetzal (GTQ) a Quetzal, Dollar, Euro
        {7.75, 1.0, 0.92}, // Dolar (USD) a Quetzal, Dolar, Euro
        {8.37, 1.09, 1.0}  // Euro (EUR) a Quetzal, Dolar, Euro
    };
    
    char* divisas[] = {"Quezales ", "Dólares ", "Euros "};

    double resultado = cantidad * conversion[de_divisa][a_divisa];
    
    printf("%.2f %s pasan a valer en %s un total de: %.2f\n", cantidad, divisas[de_divisa], divisas[a_divisa], resultado);
}

int main() {
    double cantidad;
    int de_divisa, a_divisa;
    
    
    printf("\nElija la moneda la cual desea convertir\n");
    printf("1. Quetzal (Q)\n");
    printf("2. Dolar ($)\n");
    printf("3. Euro (€)\n");
    printf("Introduzca el número de la moneda que desea convertir: ");
    scanf("%d", &de_divisa);
    
    printf("\nElija la moneda a la cual desea convertir\n");
    printf("1. Quetzal (Q)\n");
    printf("2. Dolar ($)\n");
    printf("3. Euro (€)\n");
    printf("Introduzca el número de la moneda a la cual va a convertir: ");
    scanf("%d", &a_divisa);

    printf("Ingrese la cantidad que desea convertir: ");
    scanf("%lf", &cantidad);
    
    
    de_divisa -= 1;
    a_divisa -= 1;
    
    if (de_divisa < 0 || de_divisa > 2 || a_divisa < 0 || a_divisa > 2) {
        printf("Opción No Válida\n");
        return 1;
    }
    
    divisa_convertida(cantidad, de_divisa, a_divisa);
    
    return 0;
}
