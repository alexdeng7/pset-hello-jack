#include <stdio.h>
#include <string.h>

//FINAL UPDATE ON PSET0

int main(int argc, char *argv[])
{
    char userName[129];

    if (argc > 1)
    {
        strcpy(userName, argv[1]);
    }
    else
    {
        printf("What is your name? ");
        scanf("%128[^\n]s", userName);
    }

    if (userName[0] != '\0')
    {
        printf("Hello, %s\n", userName);
    }

    return 0;
}
