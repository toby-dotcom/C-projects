#include <stdio.h>

int main(void){
	char c;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			int space = 8;
			while(space){
				putchar(' ');
				--space;
			}
		}
		else 
			putchar(c);
	}
	return 0;
}
