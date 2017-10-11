#include "math.h"

int math(int num1, int num2, char Operator)
{
	// Check which operation is passed
	switch(Operator)
	{
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '*':
			return num1 * num2;
			break;
		case '/':
			return num1 / num2;
			break;
		case '%':
			return num1 % num2;
			break;
		default:
			return 0;
			break;		
	}
}
