#include <stdio.h>
int power(int base, int n);
int main(void){
	for(int i = 0 ; i < 10; ++i){
		printf("%3d: %d %d\n", i, power(2, i), power(-3, i));
	}
	return 0;
}
int power(int base, int n){
	int p = 1;
	for(int i = 1 ; i <= n; ++i){
		p *= base;	
	} 
	return p;
}
