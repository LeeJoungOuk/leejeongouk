#include <stdio.h>

int main(void)
{
	char ch;

	printf("Enter charaters : ");
	scanf_s("%c", &ch);
	printf("%cThe ASCII code value of the charaters is %d.", ch, ch);

	return 0;

}