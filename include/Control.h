#ifndef ASSEMBLY_TOY_CONTROL_H
#define ASSEMBLY_TOY_CONTROL_H

#define MAX_INTERACTIONS 100000
#define MAX_INSTRUCTIONS_SIZE 30
#define MAX_INSTRUCTIONS 100
#define MAX_REGISTERS 32
#define MAX_MEMORY 1000
#define MAX_OPERATORS 6

typedef struct instruction {
    char operation[6];
    int registersource;
    int registerdestination;
    int registertarget;
    int flagr;
}instruction;


void decoder(char input_instructions[MAX_INSTRUCTIONS][MAX_INSTRUCTIONS_SIZE], int interactions);
void interpreter ( instruction instructions[], int interactions, char input_instructions[MAX_INSTRUCTIONS][MAX_INSTRUCTIONS_SIZE]);

#endif //ASSEMBLY_TOY_CONTROL_H
