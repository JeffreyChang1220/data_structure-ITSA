#include <stdio.h>
#include <stdlib.h>

int compare_cards(char* card1, char* card2) 
{
    char suits[] = {'C', 'D', 'H', 'S'};
    char suit1,suit2;
    for (int i = 0; i < 4; i++) 
    {
        if (card1[0] == suits[i]) 
        {
            suit1 = suits[i];
        }
        if (card2[0] == suits[i]) 
        {
            suit2 = suits[i];
        }
    }

    if (suit1 != suit2) 
    {
        return suit1 - suit2;
    } 
    else 
    {
        int value1 = atoi(&card1[1]);
        int value2 = atoi(&card2[1]);

        return value1 - value2;
    }
}

void sort_cards(char** cards, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (compare_cards(cards[j], cards[j + 1]) < 0) 
            {
                char* temp = cards[j];
                cards[j] = cards[j + 1];
                cards[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    while (1) 
    {
        char** cards = (char**)malloc(n * sizeof(char*));

        for (int i = 0; i < n; i++) 
        {
            cards[i] = (char*)malloc(3 * sizeof(char));
            scanf("%s", cards[i]);
        }

        sort_cards(cards, n);

        for (int i = 0; i < n; i++) 
        {
            printf("%s ", cards[i]);
            free(cards[i]);
        }

        free(cards);
        printf("\n");
    }

    return 0;
}