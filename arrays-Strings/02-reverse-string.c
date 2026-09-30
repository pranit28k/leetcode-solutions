#include <stdio.h>

void reverseString(char* s, int sSize)
{
    int left = 0;
    int right = sSize - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    char s[] = "hello";

    int size = sizeof(s) - 1;

    reverseString(s, size);

    printf("Reversed string: %s\n", s);

    return 0;
}