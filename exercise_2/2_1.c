#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
	printf("########### CHAR ###########\n");
	printf("bits: %d\n", CHAR_BIT);
	printf("unsigned char max: %d\n", UCHAR_MAX);
	printf("singned char max: %d\n", SCHAR_MAX);
	printf("char min: %d\n", SCHAR_MIN);
	printf("\n");

	
	printf("########### INT ###########\n");
	printf("unsigned int max: %d\n", UINT_MAX);
	printf("singned int max: %d\n", INT_MAX);
	printf("singned int min: %d\n", INT_MIN);
	printf("\n");


	printf("########### SHORT INT ###########\n");
	printf("unsigned short int max: %d\n", USHRT_MAX);
	printf("signed short int min: %d\n", SHRT_MIN);
	printf("signed short int max: %d\n", SHRT_MAX);
	printf("\n");


	printf("########### LONG INT ###########\n");
	printf("unsigned long int max: %lu\n", ULONG_MAX);
	printf("signed long int min: %ld\n", LONG_MIN);
	printf("signed long int max: %ld\n", LONG_MAX);
	printf("\n");

}
