#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char words[101];
    int i =0;
    while(i < n)
    {
        scanf("%s", words);
        int len = strlen(words);
        if(len > 10)
        {
            printf("%c%d%c\n", words[0], len - 2, words[len -1]);

        }
        else
            printf("%s\n", words);
        i++;
    }
    return 0;
}