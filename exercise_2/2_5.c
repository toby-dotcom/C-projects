#include <stdio.h>
#define MAXLINE 100

void read(int len, char s[]);
int any(char c, char s[]);

int main(void){
	char s1[MAXLINE];
	char s2[MAXLINE];

	read(MAXLINE, s1);
	read(MAXLINE, s2);

	for(int i = 0; s1[i] != '\0'; ++i){
		int sos;
		sos = any(s1[i], s2);
		if(sos < 0){
			printf("%c: %d\n", s1[i], -1);
		}else{
			printf("%c: %d\n", s1[i], sos);
		}
	}
	return 0;
}

void read(int len, char s[]){
	int i;
	char c;
	for(i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
		s[i] = c;
	}
	s[i] = '\0';
}

int any(char c, char s[]){
	for(int i = 0; s[i] != '\0'; ++i){
		if(s[i] == c)
			return i;
	}
	return -1;
}
