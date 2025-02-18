#include <stdio.h>
#include <string.h>
int main()
{
    char input[101];
    int dis[26]  ={0};
    int count = 0;
    scanf("%s", input);
    int i = 0;
    while(input[i])
    {
        int index = input[i] - 'a';
        if(!dis[index])
        {
            dis[index] = 1;
            count++;
        }
        i++;
    }
    if(count % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
}