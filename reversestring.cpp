#include <stdio.h>
#include <string.h>
void reversestring(char *str)
{
    if (*str=='\0') 
	{
        return;
    }
	 else
	 {
        reversestring(str+1);
        printf("%c",*str);
    }
}
int main() 
{
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strlen(str) - 1] = '\0'; 
    printf("Reverse of the string is: ");
    reversestring(str);
    printf("\n");
    return 0;
}
