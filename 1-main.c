#include <stdio.h>
#include "main.h"

int main(void)
{
	int len = 0;
	int len2 = 0;
	
	len = _printf("num1: %i%i %i %s\n", -1234567890, -87, 234, "\0");
	len2 = printf("num2: %i%i %i %s\n", -1234567890, -32, 922, "\0");
	_printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	
	len = _printf("%s\n", "\0");
	len2 = _printf("%s\n", "\0");
	_printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("num1: %s\n", NULL);
	len2 = printf("num2: %s\n", NULL);
	_printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);


	/*len = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
	len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple % s sentence\n");
	len2 = _printf("A simple % s sentence\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);*/

	/*len = _printf("Percentage: %%\n");
	len2 = printf("Percentage: %%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);*/

	/*len = _printf("NULL: %c,  %s %% hello %%% \n", NULL, NULL);
	len2 = printf("NULL: %c,  %s %% hello %%% \n", NULL, NULL);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("%");
	len2 = printf("%");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n", len2);

	len = _printf("\nA simple sentence%");
	len2 = printf("\nA simple sentence%");
	printf("\nLen:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);	*/


	return (0);
}
