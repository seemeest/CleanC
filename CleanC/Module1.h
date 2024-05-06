#pragma once
#include <math.h>
#include <stdio.h>

double Logarithm(double x, double y) {
	return log(fabs(x - y));
}
double Degree( double x, double y) {
	const double  e = 2.71828;
	return pow(e,x-y);
}
double  Root(double x, double y) {

	return  sqrtl(fabs(x - y));
}
void  ConditionalModul1() {

	while (true){
	
		printf("\n����� ����  ������� x � y ������ ");

		double x, y;
		printf("������� �������� x � y ����� ������: ");
		scanf_s("%lf %lf", &x, &y);
		
		if (x == 0 || y == 0) {
			break;
		}

		if (fabs(x * y) > 10) {
			printf("\n �������� �� |x *y| =%f", Logarithm(x, y));
		}
		else if (fabs(x * y) < 10) {
			printf("\n e � ������� x-y =%f", Degree(x, y));
		}
		else if (fabs(x * y) == 10) {
			printf("\n ����������  ������  �� |x - y| =%f", Root(x, y));
		}
		
	
	}
}