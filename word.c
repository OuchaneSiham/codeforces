#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int count_lower = 0, count_upper = 0;
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (isupper(s[i])) count_upper++;
        else count_lower++;
    }
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (count_upper > count_lower) 
        {
            s[i] = toupper(s[i]);
        } else 
        {
            s[i] = tolower(s[i]);
        }
    }
    printf("%s\n", s);
    return 0;
}
