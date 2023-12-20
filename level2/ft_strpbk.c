#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int cont1 = 0;
	
	if (!s1 || !s2)
	{
		return (0);
	}
	while(*s1)
	{
		i = 0;
	   	while(s2[cont1])
		{
			if(*s1 == s2[cont1])
				return (char *) s1;
			cont++;
		}
		s1++;	
	}
	return (0);
}
