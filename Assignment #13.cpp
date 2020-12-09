/*Ezigbo Ugochukwu 10/22/2020 GENG102 w/ Ling Hou This program converts Celsius to Fahrenheit and vice versa*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	float digit, odigit;
	char unit, ounit;
	
	/*Get input data*/
	printf("Solely enter the degrees; this is a digit:");
	scanf("%f", &digit);
	
	printf("Now enter the unit; use F for Fahrenheit or C for Celsius:");
	scanf(" %c", &unit);
	
	/*Error check and calculate*/
	if(unit == 'F')
	{
		odigit = (digit-32)/1.8;
		ounit = 'C';
	}
	else if(unit == 'C')
	{
		odigit = 1.8*digit +32;
		ounit='F';
	}
	else
	{
		printf("Invalid input. Please type C for Celsius or F for Fahrenheit. \n");
		system("pause");
		exit(1);
	}
		
	/*Display*/
	printf("%f %c is %f %c \n", digit, unit, odigit, ounit);
	return 0;
}
/*Solely enter the degrees; this is a digit:100
Now enter the unit; use F for Fahrenheit or C for Celsius:C
100.000000 C is 212.000000 F
Solely enter the degrees; this is a digit:32
Now enter the unit; use F for Fahrenheit or C for Celsius:F
32.000000 F is 0.000000 C
Solely enter the degrees; this is a digit:12
Now enter the unit; use F for Fahrenheit or C for Celsius:H
Invalid input. Please type C for Celsius or F for Fahrenheit.*/
