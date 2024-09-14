//
// Created by gabri on 10/22/2023.
//

#include "Memory.h"


void Load(instruction instructions[], int pc, int registers[], int memory[]) { //load the value of the source register to the destination register or integer
    registers[instructions[pc].registerdestination] = memory[instructions[pc].registersource];
}
void Store(instruction instructions[], int pc, int registers[], int memory[]) { //store the value of the source register to the destination register or integer
    memory[instructions[pc].registersource] = registers[instructions[pc].registerdestination];
}