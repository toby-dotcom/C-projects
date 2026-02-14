#include <stdio.h>
#define ALPHA 26
#define NUM 10

int main(void){
	char char_count[ALPHA + NUM];
	for(int  i = 0; i < (ALPHA + NUM); ++i)
		char_count[i] = 0;
	char c;
	while((c = getchar()) != EOF){
		if(c >= 'a' && c <= 'z')
			++char_count[c - 'a'];
		else if(c >= '0' && c <= '9')
			++char_count[c - '0' + ALPHA];
	}

	for(int i = 0; i < (ALPHA + NUM); ++i){
		if(i < ALPHA)
			printf("%3c: ", 'a' + i);
		else if(i >= ALPHA)
			printf("%3c: ", i + '0' - ALPHA);
		for(int j = 0; j < char_count[i]; j++)
			putchar('#');
		putchar('\n');
	}

	return 0;
}
