#include<stuio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	if(ch >= 'a' && ch <= 'z')
	{
		ch = ch - ('a' - 'A');
		printf("Uppercase: %c\n", ch);
	}
	else if(ch >= 'A' && ch <= 'Z')
	{
		ch = ch + ('a' - 'A');
		printf("Lowercase: %c\n", ch);
	}
	else
	{
		printf("Not an alphabetic character.\n");
	}
	return 0;
}