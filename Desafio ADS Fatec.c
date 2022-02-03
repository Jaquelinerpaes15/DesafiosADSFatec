//DI) Faça uma função que calcule o HIPERFATORIAL de um número n. Sendo H(3) = 11 * 22 * 33 = 108
#include<stdio.h>
#include <math.h>


 int _fatorial (int num){
 	int i,y, x, fator;
 	fator = 1;
 	i=1
 		
 	while ( i<=num ){

 	 		fator =  fator *pow (i,i);
 		i++;
	 }
	
	return fator;
}
int main (){
	
	int numero;
	printf (" insira um numero inteiro: ");
	scanf ("%d", &numero);

	printf (" hiper fatorial %d!: %d ",numero, _fatorial(numero));

	return 0;
	
} 	
