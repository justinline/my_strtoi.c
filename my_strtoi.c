#include <stdio.h>
typedef enum { false, true} bool;
int my_strtoi(char* s, int base);
int concatenate(unsigned int x, unsigned int y, unsigned int pow);

int main(int argc, char* argv[])
{
	my_strtoi(argv[1], 10);
}

int my_strtoi(char* s, int base) 
{
	int res = 0;
	for(int i = 0; s[i] != '\0'; i++)
	{
		res = concatenate(res, s[i] - '0', base);
	}
	printf("%i", res);
	return res;
}

int concatenate(unsigned int x, unsigned int y, unsigned int pow)
{
	while(y >= pow)
        	pow *= pow;
	return x * pow + y;        
}
