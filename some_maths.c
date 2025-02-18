#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int main() 
{
    char s[101];
    scanf("%s", s);

    int numbers[100];
    int count = 0;
    char *token = strtok(s, "+");
    while (token != NULL) 
    {
        numbers[count++] = atoi(token);
        token = strtok(NULL, "+");
    }
    qsort(numbers, count, sizeof(int), compare);
    for (int i = 0; i < count; i++) 
    {
        if (i > 0) 
        {
            printf("+");
        }
        printf("%d", numbers[i]);
    }
    printf("\n");
    return 0;
}