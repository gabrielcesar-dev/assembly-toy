#include "Input.h"
#include "Control.h"

int main() {
    char input_interactions[MAX_INSTRUCTIONS][MAX_INSTRUCTIONS_SIZE];
    int interactions;
    Input(input_interactions, &interactions); //save the input in the array
    decoder(input_interactions, interactions); //select the operation
    return 0;
}