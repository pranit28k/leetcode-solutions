#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    if (strsSize == 0)
    {
        return "";
    }

    for (int i = 0; strs[0][i] != '\0'; i++)
    {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++)
        {
            if (strs[j][i] != current || strs[j][i] == '\0')
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

int main()
{
    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";

    char* strs[] = {str1, str2, str3};

    int size = 3;

    char* result = longestCommonPrefix(strs, size);

    printf("Longest Common Prefix: %s\n", result);

    return 0;
}