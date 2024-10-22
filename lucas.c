#include <stdio.h>
#include <math.h>


int main() {

//declaração de variável

int idade;

//saida e entrada

printf("informe sua idade: ");
scanf("%d", &idade);

//infantil

if (idade<10||idade==10){
printf("infantil");
}

//senior

else if (idade>17){
printf("senior");
}

//juvenil

else {
printf("juvenil");
}
}
