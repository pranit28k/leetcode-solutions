#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t)
{
    int count[26] = {0};

    if (strlen(s) != strlen(t))
    {
        return false;
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char s[] = "anagram";
    char t[] = "nagaram";

    if (isAnagram(s, t))
    {
        printf("True - Strings are anagrams\n");
    }
    else
    {
        printf("False - Strings are not anagrams\n");
    }

    return 0;
}