#include<stdio.h>
#include<string.h>
void upper(char s[]);

int main()
{/*Write a function to convert a string characters to uppercase.
*/
	
	char s[];
	printf("Enter The name in lowercase ");
	scanf_s("%s", s[]);
	string str = upper(s[]);

	printf("the uppercase is :%s", str);


	return 0;
}
void upper(char s[]) {
		int c = 0;
	
		while (s[c] != '\0') {
			if (s[c] >= 'a' && s[c] <= 'z') {
				s[c] = s[c] - 32;
			}
			c++;
		}
	}