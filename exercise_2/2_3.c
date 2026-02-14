#include <stdio.h>
#define SYSTEM 16
#define MAXLINE 100

int htoi(char s[], int len);
int read(char s[], int len);

int main(void){
	char s[MAXLINE];
	int count = read(s, MAXLINE);

	int num = htoi(s, count);
	if(!num)
		printf("This is not 16 system\n");
	else
		printf("%s >> %d\n", s, num);
	return 0;	
}

int read(char s[], int len){
	int c;
	int i = 0;;
	while(i < len - 2 && (c = getchar()) != EOF && c != '\n'){
		s[i++] = c;
	}
	s[i] = '\0';

	return i;	
}
int degree_16(int new_num, int degree){
	for(int i = 0; i <= degree; ++i){
		new_num *= new_num;
	}

	return new_num;
}
int htoi(char s[], int count){
	int i = 0;
	int value = 0;
	if(count < 3 || s[0] != '0' || (s[1] != 'x' && s[1] != 'X'))
		return 0;
	i = 2;
	for(; s[i] != '\0'; ++i){
		int digit;
		if( s[i] >= 'A' && s[i] <= 'F'){
			digit = s[i] - 'A' + 10;
		}else if(s[i] >= 'a' && s[i] <= 'f'){
			digit = s[i] - 'a' + 10;
		}else if(s[i] >= '0' && s[i] <= '9'){
			digit = s[i] - '0';
		}else
			return 0;
		value = value * 16 + digit;
	}
	return value;
}
