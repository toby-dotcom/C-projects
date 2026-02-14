#include <stdio.h>
#define MAXLINE 10

int _getline(char s[], int len);
void copy(char to[], char from[]);

int main(void){
	char line[MAXLINE];
	char maxLine[MAXLINE];

	int len, max = 0;

	while((len = _getline(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(maxLine, line);
		}

	}
	if(max > 0)
		printf("%s", maxLine);

	return 0;
}

int _getline(char s[], int len){
	int i;
	char c;
	for(i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
		s[i] = c;
	}
	if( c == '\n'){
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	while(c != EOF && c != '\n'){
		++i;
		c = getchar();
	}

	if(c == '\n')
		++i;
	return i;
}

void copy(char to[], char from[]){
	int i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
