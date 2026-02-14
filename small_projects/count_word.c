#include <stdio.h>
#define OUT 0
#define IN 1
int main(){
	int c, nw = 0, state;
	state = OUT;
	while((c = getchar()) != EOF){
		if(c == '\t' || c == '\n' || c == ' ')
			state = OUT;
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("new word %d\n", nw);
	return 0;
}
