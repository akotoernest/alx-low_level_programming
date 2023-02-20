#include <stdio.h>
/**
 * main - Size of various types on the computer
 *
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char:%lu byte(s)\n", sizeof(char));
	printf("Size of a int:%lu byte(s)\n", sizeof(int));
	printf("Size of a long int:%lu byte(s)\n", sizeof(long int));
	printf("Size of s long long int:%lu byte(s)\n", sizeof(long long int));
	printf("Size of a float:%lu byte(s)", sizeof(float));
	return (0);
}
