#include <stdio.h>

#define MAXLINE 10000
#define TRUE (1 == 1)
#define FALSE !TRUE

void getstr(char s[], int len);
void check(char s[]);

int main(void){
	char s[MAXLINE];
	getstr(s, MAXLINE);
	check(s);

	return 0;
}

void getstr(char s[], int len){
	int c;
	int i = 0;
	while(i < len - 1 && (c = getchar()) != EOF){
		s[i++] = c;
	}
	s[i] = '\0';

}

void check(char s[]){
	int line = 1;
	int brackets = FALSE;
	int quots = FALSE;
	int last = 0;
	int index_open = 0;
	int index_close = 0;
	int i;
	for(i = 0; s[i] != '\0'; ++i){
		if(s[i] == '(' && !last){
			index += 1;
			last = TRUE;
		}else if(
	}
}
