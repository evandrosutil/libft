#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, unsigned long int n)
{
	unsigned long int i;

	while(i < n && *((unsigned char *)s + i) != '\0')
	{
		*((unsigned char *)s + i) = (unsigned char)'\0';
		i++;
	}	
}

int main()
{
	unsigned char str1[40]="pipopopopo";
	unsigned char str2[40]="pipopopopo";
	bzero(str1, 1);
	ft_bzero(str2, 1);
	printf("%s\n", str1);
	printf("%s\n", str2);
}
