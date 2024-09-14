#include <string.h>
#include <stdlib.h>
#include "Control.h"
#include "Arithmetic.h"
#include "Logic.h"
#include "Memory.h"
#include "Output.h"

void decoder(char input_instructions[MAX_INSTRUCTIONS][MAX_INSTRUCTIONS_SIZE], int interactions) {
    int registers[MAX_REGISTERS] = {0};
    int memory[MAX_MEMORY] = {0};
    instruction instructions[interactions]; //struct to save the input
    interpreter(instructions, interactions, input_instructions);
    int pc = 0;
    int max_pc = 0; //flag to limit the number of interactions
    while (pc < interactions && max_pc < MAX_INTERACTIONS) { //select the operation
        max_pc++;
        if (!strcmp(instructions[pc].operation, "MOV")) { //if the operation is mov, call the function
            Mov(instructions, pc, registers);
        } else if(!strcmp(instructions[pc].operation, "ADD")){ //if the operation is add, call the function
            Add(instructions, pc, registers);
        } else if(!strcmp(instructions[pc].operation, "SUB")){ //if the operation is sub, call the function
            Sub(instructions, pc, registers);
        } else if(!strcmp(instructions[pc].operation, "MUL")){
            Mul(instructions, pc, registers);
        } else if(!strcmp(instructions[pc].operation, "DIV")){
            Div(instructions, pc, registers);
        } else if(!strcmp(instructions[pc].operation, "MOD")){
            Mod(instructions, pc, registers);
        } else if(!strcmp(instructions[pc].operation, "BEQ")){
            Beq(instructions, &pc, registers);
        } else if(!strcmp(instructions[pc].operation, "BLT")){
            Blt(instructions, &pc, registers);
        } else if(!strcmp(instructions[pc].operation, "JMP")){
            Jmp(instructions, &pc, registers);
        } else if(!strcmp(instructions[pc].operation, "LOAD")){
            Load(instructions, pc, registers, memory);
        } else if(!strcmp(instructions[pc].operation, "STORE")){
            Store(instructions, pc, registers, memory);
        } else if(!strcmp(instructions[pc].operation, "PRINT")) {
            Print(registers, instructions, pc);
        } else if(!strcmp(instructions[pc].operation, "EXIT")){ //if the operation is exit, finish the program
            exit(0);
        }
        pc++;
    }
}

void interpreter ( instruction instructions[], int interactions, char input_instructions[MAX_INSTRUCTIONS][MAX_INSTRUCTIONS_SIZE]) //separate the input in the struct
{
    for (int pc = 0; pc < interactions; ++pc) {
        char aux[MAX_OPERATORS][MAX_INSTRUCTIONS_SIZE] = {0}; //auxiliary array to save the input
        instructions[pc].flagr = 0;
        for (int i = 0, j = 0, k = 0; input_instructions[pc][i] != '\0'; ++i, ++k) {
            if (input_instructions[pc][i] == ' ') { //if the character is a space, go to the next array
                k = -1;
                j++;
                continue;
            }
            if (input_instructions[pc][i] == 'R' && j != 0) { //if the character is a R and isn't the destination register, go to the next array
                k--;
                instructions[pc].flagr++; //flag to know if the instruction has a register
                continue;
            }
            aux[j][k] = input_instructions[pc][i];
        }
        strcpy(instructions[pc].operation, aux[0]); //save the input in the struct, copying the string
        instructions[pc].registerdestination = atoi(aux[1]); //save the input in the struct, converting the string to integer
        instructions[pc].registersource = atoi(aux[2]); //save the input in the struct, converting the string to integer
        instructions[pc].registertarget = atoi(aux[3]); //save the input in the struct, converting the string to integer
    }
}



