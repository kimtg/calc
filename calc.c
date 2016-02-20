#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[])
{
	double a;
	char buf[80];
	puts("Operators: + - * / sqrt expt");
	puts("Tokens are separated by whitespaces.");

	while (1) {
		printf("> ");
		scanf_s("%s", buf);
		if (strcmp(buf, "+") == 0) {
			double b;
			scanf_s("%lf", &b);
			a += b;
		}
		else if (strcmp(buf, "-") == 0) {
			double b;
			scanf_s("%lf", &b);
			a -= b;
		}
		else if (strcmp(buf, "*") == 0) {
			double b;
			scanf_s("%lf", &b);
			a *= b;
		}
		else if (strcmp(buf, "/") == 0) {
			double b;
			scanf_s("%lf", &b);
			a /= b;
		}
		else if (strcmp(buf, "sqrt") == 0) {
			a = sqrt(a);
		}
		else if (strcmp(buf, "expt") == 0) {
			double b;
			scanf_s("%lf", &b);
			a = pow(a, b);
		}
		else {
			a = atof(buf);
		}
		printf("%.16g\n", a);
	}

	return 0;
}
