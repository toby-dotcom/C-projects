#include <stdio.h>
int main(){
	int nl = 0, cp = 0, t = 0;
	int c;
	while((c = getchar()) != EOF){
		if(c == ' ') ++cp;
		else if(c == '\t') ++t;
		else if(c == '\n') ++nl;
	}
	printf("nl %d sp %d t %d\n", nl, cp, t);
	return 0;
}
