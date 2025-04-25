#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;

    char firstString[101], secondString[101];

    scanf("%s %s", firstString, secondString);

    int firstStringLength = strlen(firstString);
    int secondStringLength = strlen(secondString);

    int stringLength;

    if (firstStringLength > secondStringLength)
    {
        stringLength = firstStringLength;
    }
    else
    {
        stringLength = secondStringLength;
    }

    while (i < stringLength)
    {
        /* code */
        if (firstString[i] == '\0' && secondString[i] == '\0')
        {
            /* code */
            printf("Equal");
            break;
        }
        else if (firstString[i] == '\0' || firstString[i] < secondString[i])
        {
            /* code */
            printf("%s is smaller", firstString);
            break;
        }
        else if (secondString[i] == '\0' || secondString[i] < firstString[i])
        {
            /* code */
            printf("%s is smaller", secondString);
            break;
        }
        else
        {
            i++;
        }
    }

    return 0;
}