#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, unsigned long int n)
{
	unsigned long int i;

	i = 0;
	while (i < n && *((unsigned char *)s + i) != '\0')
	{
		*((unsigned char *)s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}

int main()
{
	char str1[100] = "This is a test string";
	char str2[100] = "This is a test string";
	memset(str1, '@', 9);
	printf("%s\n", str1);
	ft_memset(str2, '@', 9);
	printf("%s\n", str2);
}
