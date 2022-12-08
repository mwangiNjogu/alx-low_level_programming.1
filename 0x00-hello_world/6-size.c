#include <stdio.h>
/**
 * main - Entry point
 * return: Always 0 (Success)
 */

int main(void)

{

	  printf("Type char: %lu byte(s)\n", sizeof(char));

	    printf("Type int: %lu byte(s)\n", sizeof(int));

	      printf("Type long int: %lu byte(s)\n", sizeof(long int));

	        printf("Type long long int: %lu byte(s)\n", sizeof(long long int));

		  printf("Type float: %lu byte(s)\n", sizeof(float));

		    printf("Type double: %lu byte(s)\n", sizeof(double));

		      printf("Type long double: %lu byte(s)\n", sizeof(long double));

		        printf("Type pointer: %lu byte(s)\n", sizeof(void *));

			  return 0;

}


