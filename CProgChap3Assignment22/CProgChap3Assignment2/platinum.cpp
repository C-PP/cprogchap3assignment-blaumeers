#include <stdio.h>
#include <stdlib.h>
void function(float weight);
/* ANSI/ISO C function prototyping */
int main(void) {
	float weight;    /* user weight             */

	printf("Enter a floating-point value:");
	scanf("%f", &weight);      /* assume platinum is $1700 per ounce          */
							   /* 14.5833 converts pounds	*/
	function(weight);
	getchar();
	return 0;
}

void function(float weight)       /* start of function definition */
	{

		float value;     /* platinum equivalent     */

		printf("fixed-point notation: %f\n", weight);
		printf("exponential notation: %e\n", weight);
		printf("p notation: %a,\n", weight);
		system("pause");
		return;
	}
