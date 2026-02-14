#include <stdio.h>
#define TAB 8

int main(void){
	int c;
	unsigned int space = 0;
	int poc = 0;

	while((c = getchar()) != EOF){
		++poc;
		if(c == ' '){
			++space;
			if(poc % TAB == 0 && space > 1){
				putchar('\t');
				space = 0;
			}
		}else{
			while(space){
				putchar(' ');
				--space;
			}
			if(c == '\n')
				poc = 0;
			putchar(c);
		}
	}
	return 0;
}
