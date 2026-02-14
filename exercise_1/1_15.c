#include <stdio.h>
int temp_k(int t);

int main(void){
	for(int i = 0; i <= 300; i = i+20)
		printf("%3d: %4d\n", i, temp_k(i));
	return 0;
}
int temp_k(int t){
	return t - 32;
}
