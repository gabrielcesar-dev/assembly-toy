//
// Created by gabri on 10/22/2023.
//

#ifndef ASSEMBLY_TOY_LOGIC_H
#define ASSEMBLY_TOY_LOGIC_H


#include "Control.h"

void Mov(instruction instructions[], int pc, int registers[]);
void Beq(instruction instructions[], int *pc, int registers[]);
void Blt(instruction instructions[], int *pc, int registers[]);
void Jmp(instruction instructions[], int *pc, int registers[]);

#endif //ASSEMBLY_TOY_LOGIC_H
