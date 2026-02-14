#include <stdio.h>
#define MAXLINE 1000

int main(void){
	/* for(int i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
	 *	s[i] = c;
	 * }
	 * if(c == '\n') s[i++] = c;
	 * s[i] = '\0'; */

	char s[MAXLINE];
	int i = 0;
	int c;
	while(1){
		if(i >= MAXLINE - 1)
			break;
		c = getchar();

		if(c == EOF){
			break;
		}else if(c == '\n'){
			break;
		}else{
			s[i++] = c;
		}
	}
	s[i] = '\0';

	printf("%s\n", s);

	return 0;

}
