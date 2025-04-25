// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char firstString[101], secondString[101];

//     scanf("%s %s", firstString, secondString);

//     int firstStringLength = strlen(firstString);
//     int secondStringLength = strlen(secondString);

//     // char finalString[firstStringLength + secondStringLength];

//     // for (int i = 0; i < firstStringLength; i++)
//     // {
//     //     /* code */
//     //     finalString[i] = firstString[i];
//     // }

//     // for (int i = 0; i < secondStringLength; i++)
//     // {
//     //     /* code */
//     //     finalString[i + firstStringLength] = secondString[i];
//     // }

//     // printf("%s %s", finalString, secondString);

//     for (int i = 0; i <=  secondStringLength; i++)
//     {
//         /* code */
//         firstString[i + firstStringLength] = secondString[i];
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

    strcat(firstString, secondString);

    printf("%s %s", firstString, secondString);

    return 0;
}