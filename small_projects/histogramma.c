#include <stdio.h>
#define BUFFER 100

int main(void){
	int histogramma[BUFFER];
	int max_histogramma = 0;
	char c;
	int max_word_index = 0;
	int word_index = 0;
	
	for(int i = 0; i < BUFFER; ++i)
		histogramma[i] = 0;

	while((c = getchar())){
		if(c == ' ' || c == '\t' || c == '\n' || c == EOF){
			if(word_index > 0){
				++histogramma[word_index - 1];
			}
			if(histogramma[word_index - 1] > max_histogramma){
				max_histogramma = histogramma[word_index - 1];
			}
			if(word_index > max_word_index){
				max_word_index = word_index;
			}
			if(c == EOF)
				break;
		}
		else
			++word_index;
	}
	histogramma[max_word_index - 1] = '$';
	putchar('\n');
	printf("horizontal hes-----------\n");
	int line = 0;
	int colum = 0;
	while(histogramma[colum] != '$'){
		printf("%3d:  \t", histogramma[colum]);
		for(line = 0; line < histogramma[colum]; ++line)
			putchar('#');
		putchar('\n');
		++colum;
	}

	for(line = max_word_index; line >= 0; --line){
		colum = 0;
		while(histogramma[colum] != '$'){
			if(line == 0)
				printf("%2d ", colum + 1);
			else if(histogramma[colum] >= line)
				printf("## ");
			else 
				printf("  ");
			++colum;
		}
		putchar('\n');
	}
	return 0;
}
