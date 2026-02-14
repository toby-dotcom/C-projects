#include <stdio.h>

#define MAXLINE 10000

#define TRUE (1 == 1)
#define FALSE !TRUE

int get_str(char s[], int len);
void remov_comment(char s[],char new_s[]);

int main(void){
	char s[MAXLINE], new_s[MAXLINE];

	get_str(s,MAXLINE);

	remov_comment(s, new_s);

	printf("%s", new_s);
	return 0;
}

int get_str(char s[], int len){
	int i = 0;
	int c;
	while(i < len - 1 && ((c = getchar()) != EOF)){
		s[i++] = c;
	}	
	s[i] = '\0';

	return i;
}

void remov_comment(char s[],char new_s[]){
	int line_comment = FALSE;
	int block_comment = FALSE;
	int in_quot = FALSE;
	int i = 0, j = 0;                               //
						/*   
						 *   */
						// printf("/*")

	while(s[i] != '\0'){
		if(!block_comment && !line_comment){
			if(!in_quot && s[i] == '"'){
				in_quot = TRUE;
			}else if(in_quot && s[i] == '"'){
				in_quot = FALSE;
			}
		}
		if(!in_quot){
			if(s[i] == '/' && s[i + 1] == '/' && !block_comment){
				line_comment = TRUE;
			}
			if(s[i] == '\n' && line_comment){
				line_comment = FALSE;
			}
			if(s[i] == '/' && s[i + 1] == '*'){
				block_comment = TRUE;
			}else if(s[i] == '*' && s[i+1] == '/'){
				block_comment = FALSE;
				i += 2;
				continue;
			}
			if(block_comment || line_comment){
				++i;				
			}else if(!block_comment && !line_comment){
				new_s[j++] = s[i++];
			}
		}else{
			new_s[j++] = s[i++];
		}
	}

	new_s[j] = '\0';
}
