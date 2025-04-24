// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char firstString[101], secondString[101];

//     scanf("%s %s", firstString, secondString);

//     int stringLength = strlen(secondString);

//     for (int i = 0; i <= stringLength; i++)
//     {
//         /* code */
//         firstString[i] = secondString[i];
//     }

//     printf("%s %s", firstString, secondString);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char firstString[101], secondString[101];

    scanf("%s %s", firstString, secondString);

    strcpy(firstString, secondString);

    printf("%s %s", firstString, secondString);

    return 0;
}