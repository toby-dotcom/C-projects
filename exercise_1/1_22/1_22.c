#include <stdio.h>

#define MAXLINE 1000
#define TRUE 1
#define FALSE !TRUE
#define BreakPoint 20
#define StartPoint 10

int _getline(char s[], int len);
void fols(char s[], char new_s[], int n_break);

int main(void){
	char s[MAXLINE];
	char new_s[MAXLINE];

	while((_getline(s, MAXLINE)) > 0){
		fols(s, new_s, BreakPoint);
		printf("%s", new_s);
	}


	return 0;
}

int _getline(char s[], int len){
	char c;
	int i;
	for(i = 0; i < len - 1 && ((c = getchar()) != EOF && c != '\n'); ++i)
		s[i] = c;
	if(c == '\n')
		s[i++] = c;
	s[i] = '\0';

	return i;
}

void fols(char s[], char new_s[], int n_break){
	int i, j;
	int column = 0;
	int split = FALSE;
	int last_blank = 0;

	for(i = 0, j = 0; s[i] != '\0'; ++i, ++j){
		new_s[j] = s[i];
		if(new_s[j] == '\n')
			column = 0;
		column++;

		if(column == n_break - StartPoint)
			split = TRUE;

		if(split && (new_s[j] == ' ' || new_s[j] == '\t'))
			last_blank = j;
		if(column == n_break){
			if(last_blank){
				new_s[last_blank] = '\n';
				column = j - last_blank;
				last_blank = 0;
			}else{
				new_s[j++] = '-';
				new_s[j] = '\n';
				column = 0;
			}
		}
	}
	new_s[j] = '\0';
}
