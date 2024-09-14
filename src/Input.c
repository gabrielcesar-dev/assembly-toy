#include <stdio.h>
#include "Input.h"

void Input(char input_interactions[MAX_INSTRUCTIONS][MAX_INSTRUCTIONS_SIZE], int *interactions) //save the input in the array
{
    scanf("%d", interactions); //save the number of interactions
    for (int i = 0; i < *interactions; ++i)
    {
        while (getchar() != '\n'); //
       scanf("%[^\n]s", input_interactions[i]); //save the input in the array, all characters until the \n
    }
}