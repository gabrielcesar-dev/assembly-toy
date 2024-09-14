//
// Created by gabri on 10/22/2023.
//

#include "Logic.h"

void Mov(instruction instructions[], int pc, int registers[]) { //move the value of the source register to the destination register or integer
    if (instructions[pc].flagr == 2) { //if the flag is 2, the source is a register
        registers[instructions[pc].registerdestination] = registers[instructions[pc].registersource];
    } else
        registers[instructions[pc].registerdestination] = instructions[pc].registersource;
}
void Beq(instruction instructions[], int *pc, int registers[]) { //if the value of the destination register is equal to the value of the source register, jump to the target register
    if (registers[instructions[*pc].registerdestination] == registers[instructions[*pc].registersource]) {
        *pc = instructions[*pc].registertarget - 1;
    }
}
void Blt(instruction instructions[], int *pc, int registers[]) { //if the value of the destination register is less than the value of the source register, jump to the target register
    if (registers[instructions[*pc].registerdestination] < registers[instructions[*pc].registersource]) {
        *pc = instructions[*pc].registertarget - 1;
    }
}
void Jmp(instruction instructions[], int *pc, int registers[]) { //jump to the target register
    *pc = instructions[*pc].registerdestination - 1;
}