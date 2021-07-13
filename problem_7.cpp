// Subeen Bhai 52 - Problem 7

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[100000];
    char *p, *e;
    int T;
    long input;
    int count;
    int i;
    
    scanf("%d", &T);
    
    for(i=0; i<T; ++i)
    {
        count = 0;
        scanf(" %[^\n]", line);
        //printf("%s\n", line);
        
        p = line;
        
        for(;;p=e)
        {
            input = strtol(p, &e, 10);
            if(p==e)
                break;
                
            ++count;
        }
        printf("%d\n", count);
    }    
    return 0;
}
