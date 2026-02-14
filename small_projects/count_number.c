#include <stdio.h>
int main(){
	int c, ndigit[10];
	for(int i = 0; i <= 9; i++)
		ndigit[i] = 0;
	while((c = getchar()) != EOF){
		if(c >= '0' && c <= '9')
			++ndigit[c - '0'];
	}
	for(int i = 0; i < 10; i++)
		printf("%3d", ndigit[i]);
	return 0;
}
