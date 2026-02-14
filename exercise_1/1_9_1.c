#include <stdio.h>
#define MAXLINE 1000

int _getline(char s[], int len);
void _copy(char to[], char from[]);

int main(void){
	int len, max = 0;
	char line[MAXLINE];
	char maxLine[MAXLINE];

	while((len = _getline(line,MAXLINE)) > 0){
		if(len > max){
			max = len;
			_copy(maxLine, line);
		}
	}
	if(max > 0)
		printf("%s", maxLine);
	return 0;
}

int _getline(char s[], int len){
	char c;
	int i;
	for(i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void _copy(char to[], char from[]){
	int i = 0;
	while((to[i] = from[i]) != '\0')
		++i;	
}
