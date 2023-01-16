
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i, l = 0;
    printf("Input a string : ");
    scanf("%s", str);
    printf("\n-------------------------------------\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    printf("The string  %d  number of characters. \n",l);

    printf("-------------------------------------\n");
    return 0;

}
