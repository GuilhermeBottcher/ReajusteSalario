#include <stdio.h>
#include <stdlib.h>
int main()
{
	float salario, reajuste, salariot;


	printf("informe seu salario");
	scanf("%f", &salario);

	if (salario >= 0.0 && salario <= 400.0)
	
	{
		reajuste = salario * 15 / 100;
		salariot = reajuste + salario;
		printf("novosalario:%.2f", salariot);
		printf("reajuste ganho %.2f", reajuste);
		printf("em precentual 15");

	}
	else if (salario >= 400.01 && salario <= 800.00)
	{
		reajuste = salario * 12 / 100;
		salariot = reajuste + salario;
		printf("novosalario:%.2f", salariot);
		printf("reajuste ganho %.2f", reajuste);
		printf("em precentual 12");
	}
	 else if  (salario >= 800.01 && salario <=1200)
	{
		reajuste = salario * 10 / 100;
		salariot = reajuste + salario;
		printf("novosalario:%.2f", salariot);
		printf("reajuste ganho %.2f", reajuste);
		printf("em precentual 10");

	}
	else if (salario >= 1200.01 && salario <= 2000.00)
	{
		reajuste = salario * 7 / 100;
		salariot = reajuste + salario;
		printf("novosalario:%.2f", salariot);
		printf("reajuste ganho %.2f", reajuste);
		printf("em precentual 7");
	}
	else if  (salario >= 2000)
	{
		reajuste = salario * 4 / 100;
		salariot = reajuste + salario;
		printf("novosalario:%.2f", salariot);
		printf("reajuste ganho %.2f", reajuste);
		printf("em precentual 4");

	}
system("pause");

}










