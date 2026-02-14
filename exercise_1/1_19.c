#include <stdio.h>
#define MAXLINE 1000

int myGetline(char s[], int len);
void myReverse(char s[], int len);

int main(void){
	char s[MAXLINE];
	int len;
	while((len = myGetline(s, MAXLINE)) > 0){
		myReverse(s, len);		
		printf("%s", s);
	}
	return 0;
}

int myGetline(char s[], int len){
	char c;
	int i;
	for(i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if(c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

void myReverse(char s[],int len){
	int i = len - 1;
	if(s[i] == '\n') --i;
	int j = 0;
	while(j < i){
		char temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		++j;
		--i;
	}
}
