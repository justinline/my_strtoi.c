#include <stdio.h>
typedef enum { false, true} bool;
int my_strtoi(char* s, int base);
int concatenate(unsigned int x, unsigned int y, unsigned int base);

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("Error: No cstring argument was given");
		return 0;
	}
	my_strtoi(argv[1], 10); /* Run function with Base 10 */
}

int my_strtoi(char* s, int base) 
{
	int res = 0;
	for(int i = 0; s[i] != '\0'; i++)
	{
		res = concatenate(res, s[i] - '0', base);
	}
	printf("%i", res); /* For testing, can be removed */
	return res;
}

int concatenate(unsigned int x, unsigned int y, unsigned int base)
{
	while(y >= base) /* Check y against our base to understand how much to multiply x by */
        	base *= base;
	return x * base + y;        
}
