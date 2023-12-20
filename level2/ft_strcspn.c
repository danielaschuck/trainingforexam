#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     cont1 = 0;
    int     cont2 = 0;
    while(s[cont1] != '/0'){
        while(reject[cont2] != '/0'){
            if(s[cont1]==reject[cont2])
              return(cont1);
            cont2++;
        }
        cont1++;
    }
    return(cont1);
}
        
