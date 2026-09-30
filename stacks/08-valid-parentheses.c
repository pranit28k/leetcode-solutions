#include <stdio.h>
#include <stdbool.h>

bool isValid(char* s)
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            stack[++top] = ch;
        }
        else
        {
            if (top == -1)
            {
                return false;
            }

            char open = stack[top--];

            if (ch == ')' && open != '(')
                return false;

            if (ch == '}' && open != '{')
                return false;

            if (ch == ']' && open != '[')
                return false;
        }
    }

    return top == -1;
}

int main()
{
    char s[] = "()";

    if (isValid(s))
    {
        printf("True - Valid Parentheses\n");
    }
    else
    {
        printf("False - Invalid Parentheses\n");
    }

    return 0;
}