#include <stdio.h>
#define MAXLINE 1000

void myRemove(char s[]);
int  myGetline(char s[], int len);
int  empty(char s[]);

int main(void){
	char s[MAXLINE];
	while(myGetline(s, MAXLINE) > 0){
		if(!empty(s)){
			myRemove(s);
			printf("%s", s);
		}
	}
	return 0;
}

int myGetline(char s[], int len){
	char c;
	int i;
	for(i = 0 ; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
		s[i] = c;
	}
	if(c == '\n'){
		s[i++] = c;
	}
	s[i] = '\0';

	return i;
}
int empty(char s[]){
	for(int i = 0; s[i] != '\0'; i++){
		if(s[i] != '\n' && s[i] != '\t' && s[i] != ' ')
			return 0;
	}
	return 1;
}
void myRemove(char s[]){
	int i = 0;
	int j = 0;
	int space = 0;
	while(s[i] != '\0'){
		if(s[i] == ' ' || s[i] == '\t'){
			if(!space){
				s[j++] = ' ';
				space = 1;
			}
		}else{
			s[j++] = s[i];
			space = 0;
		}
		++i;
	} 
	s[j] = '\0';
}
