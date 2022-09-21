#include <stdio.h>

int main(void)
{
	double kg;
	double cm;
	double bmi;

	printf("weight(kg)and heigt(cm) input :");
	scanf_s("%lf%lf", &kg, &cm);

	bmi = (kg) / (cm * cm);

	(bmi >= 20.0) && (bmi < 25.0) ? printf("average") : printf("Take care of your weight\n");

	return 0;
}