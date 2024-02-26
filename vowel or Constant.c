#include <stdio.h>

int main()
{
	char ch; 
	
	printf("Enter single characeter: "); 
	
	scanf("%c", &ch); 
	switch(ch) {
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("vowel\n");
			break;
		default :

			if( (ch >='a' && ch<='z') || (ch >= 'A' && ch <= 'Z') )
				printf(" consonant\n");
			else
				printf("neither vowel nor consonant\n");
	}
}
    