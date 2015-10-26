#include <stdio.h>

/*meu primeiro programa em c */
/*teste no github*/
int main ()

{
	float num1, num2;
	char op;
		 	
	printf("digite: o numero / operacao / numero");
	scanf("%f %c %f", &num1, &op, &num2 );
	
	switch (op)
	{
		case '+':
			printf(" = %f\n", num1+num2);
			break;
		case '-':
			printf(" = %f\n", num1+num2);
			break;
		case '*':
			printf(" = %f\n", num1*num2);
			break;
		case '/':
			if (num1 != 0)
			printf(" = %15f\n", num1/num2);
			else
			printf("dividao por zero\n");
			break;
		defalt:
			printf("operador invalido\n");
			break;
			
	
	}
	
	
	
}

