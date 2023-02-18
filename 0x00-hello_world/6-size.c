#include <stdio.h>
/**
 * mani -  size of various types on the computer
 *
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char:%lu byte(s)", sizeof(char));
	printf("Size of a int:%lu byte(s)", sizeof(int));
	printf("Size of a long int:%lu byte(s)", sizeof(long int));
	printf("Size of s long long int:%lu byte(s),"sizeof(long long int));
	printf("Size of a float:%lu byte(s)", sizeof(float));
