#include<stdio.h>

int unidade(){
    float valor, metragem;
    printf("Digite o valor em metros: ");
    scanf ("%f", &valor);
    metragem = valor*10;
    printf ("\n O valor em decimetros e: %.0f \n", metragem);
    metragem = valor*100;
    printf ("O valor em centimetros e: %.0f \n", metragem);
    metragem = valor*1000;
    printf ("O valor em milimetros e: %.0f \n", metragem);
    return 0;
    
}
int multiplicacao(){
    int numero;
    printf(" \n Digite um numero: ");
    scanf ("%d", &numero);
    for (int i = 1; i<= 10; i++){
        printf("\n %d * %d = %d", numero, i, numero * i);
    }
    return 0;
}
int inflacao(){
    int valor;
    printf ("Digite o preco: ");
    scanf ("%d", &valor);
    if (valor < 100){
        printf ("O valor inflacionou em 10 por cento o valor dele agr e: %d \n", ((valor * 10)/100) + valor);
    }else{
        printf ("O valor inflacionou em 20 por cento o valor dele agr e: %d \n", ((valor * 20)/100) + valor);
    }
    return 0;
}
int temperatura(){
    double fahrenheit, celsius;
    printf ("Digite a temperatura em Fahrenheit: ");
    scanf ("%lf", &fahrenheit);
    celsius = (fahrenheit-32.0) * (5.0/9.0);
    printf ("A temperatura em celsius e %.2lf", celsius);
    return 0;
    
}
int main(){
    int escolha;

    
    do{
        printf ("Digite um valor de 1 a 4 (ou 0 para encerrar): ");
        scanf("%d", &escolha);
        switch (escolha)
        {
            case 1:
                unidade();
            break;
            case 2:
                multiplicacao();
            break;
            case 3:
                inflacao();
            break;
            case 4:
                temperatura();
            break;
        }
    }while (escolha != 0);
        
    return 0;
}