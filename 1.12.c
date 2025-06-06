#include <stdio.h>
int main() {
	char string[100];
	fgets(string, 100, stdin);
	for (int i = 0; i < 100/sizeof(string[0]); i++) {
		if ((string[i] == '\t') || (string[i] == '\n') || (string[i] == ' ')) {
			string[i] = '\\';
		}
	}	
	printf("%s\n", string);
}
