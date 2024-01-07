#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main() 
{
    char input[100]; 
    fgets(input, sizeof(input), stdin);
    char dict[] = "~!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\\\:\"\"asdfghjkl;''<>??zxcvbnm,.//";
    for (int i = 0; i < strlen(input); ++i) 
    {
        char character = tolower(input[i]);
        char *index = strchr(dict, character);
        if (index != NULL) 
        {
            printf("%c", *(index + 1));
        }
        else 
        {
            printf("%c", character);
        }
    }

    return 0;
}