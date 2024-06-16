#include <stdio.h>
void copy_string(char*src,char*dst,int i) 
{
    if(src[i]=='\0')
	 {
        dst[i]='\0'; 
        return;
    }
    dst[i]=src[i];
    copy_string(src,dst,i+1);
}
int main() 
{
    char src[100];
    char dst[100];
    printf("Enter a string: ");
    scanf("%s", src);
    copy_string(src, dst, 0);
    printf("Copied string: %s\n", dst);
    return 0;
}
