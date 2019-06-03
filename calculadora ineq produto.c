#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

	float a ,b ,c = 0,a2, b2, c2 = 0, x1, x2;
	int maior, retaesq1, retadir1, retaesq2, retadir2, retaesq3, retadir3, retameio;

	printf("Formato: (ax+b)*(a2x+b2) < ou > ou <= ou >= 0\n");

	printf("Digite o a da primeira inequacao: ");
	scanf("%f", &a);

	printf("Digite o b da primeira inequacao: ");
	scanf("%f", &b);

	printf("Digite o a da segunda inequacao: ");
	scanf("%f", &a2);

	printf("Digite o b da segunda inequacao: ");
	scanf("%f", &b2);

	printf("1: < \n2: > \n3: <= \n4: >= \nDigite o sinal: ");
	scanf("%d", &maior);

	switch (maior){

		case 1:
		c = c - b;
		c = c/a;
		printf("%.2f \n", c);

		c2 = c2 - b2;
		c2 = c2/a2;
		printf("%.2f \n", c2);

		if (c < c2){
			x1 = c;
			x2 = c2;
		}

		else if (c > c2){
			x1 = c2;
			x2 = c;
		}

		else {
			x1 = c;
			x2 = 0;
		}

		if (a < 0){
			retadir1 = -1;
			retaesq1 = 1;
		}

		else if(a2 < 0){
			retadir2 = -1;
			retaesq2 = 1;
		}

		else {
			retadir1 = 1;
			retadir2 = 1;
			retaesq1 = -1;
			retaesq2 = -1;
		}

		retaesq3 = retaesq1 * retaesq2;
		retameio = retadir1 * retaesq2;
		retadir3 = retadir1 * retaesq2;

		if (retameio < 0){
			printf("O conjunto solucao desta equacao e: ] %.2f , %.2f [\n", x1, x2);
		}

		else if (retaesq3 < 0){
			printf("O conunto solucao desta equacao e: ] -inf, %.2f [\n", x1);
		}

		else if (retadir3 < 0){
			printf("O conunto solucao desta equacao e: ] %.2f, +inf [\n", x2);
		}

		break;

		case 2:
		c = c - b;
		c = c/a;
		printf("%.2f \n", c);

		c2 = c2 - b2;
		c2 = c2/a2;
		printf("%.2f \n", c2);
		break;

		case 3:
		c = c - b;
		c = c/a;
		printf("%.2f \n", c);

		c2 = c2 - b2;
		c2 = c2/a2;
		printf("%.2f \n", c2);
		break;

		case 4:
		c = c - b;
		c = c/a;
		printf("%.2f \n", c);

		c2 = c2 - b2;
		c2 = c2/a2;
		printf("%.2f \n", c2);
		break;

		default:
		printf("Algo de errado nao esta certo :^( \n");
		break;
	}

	system ("pause");

	return 0;
}