#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	#02
	
	int i=0;
	char str[4];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	printf("%s\n", str);
	
	while(str[i]!='\0')
	{
		printf("%c\n",str[i]);
		i++;
		
	}
	
	#03
	
	char src[] ="The worst things toeat before you sleep";
	char dst[100];
	strcpy(dst, src);
	printf("copied string : %s", dst);
	
	#04
	
	char str[30] ="happy C programming";
	printf("string \"%s\" ¿« ±Ê¿Ã: %i\n", str, strlen(str));
	
	
	return 0;
}
