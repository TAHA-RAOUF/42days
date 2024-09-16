
#include <string.h>
#include <stdio.h>

int main()
{
	char *t = "taha";
	int size = 200;
	char buffer[size];
	strcpy(buffer, t);
	printf("%lu",strlcat(buffer,"ali", size));
}