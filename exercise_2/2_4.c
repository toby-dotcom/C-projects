#include <stdio.h>
#define MAXLINE 100
void read(int len, char s[]);
void squeeze(char s1[], char s2[]);

int main(void){
	char s1[MAXLINE];
	char s2[MAXLINE];

	read(MAXLINE, s1);
	read(MAXLINE, s2);

	squeeze(s1, s2);

	printf("%s\n", s1);

	return 0;
}

void read(int len , char s[]){
	int i;
	char c;
	for(i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
		s[i] = c;
	}
	s[i] = '\0';
}

void squeeze(char s1[], char s2[]){
	int i, j, k = 0;
	int found;

	for(i = 0; s1[i] != '\0'; ++i){
		found = 0;
		for(j = 0; s2[j] != '\0'; ++j){
			if(s1[i] == s2[j]){
				found = 1;
				break;
			}
		}
		if(!found){
			s1[k++] = s1[i];
		}
	}
	s1[k] = '\0';
}
