//
// Created by gabri on 10/22/2023.
//

#ifndef ASSEMBLY_TOY_ARITHMETIC_H
#define ASSEMBLY_TOY_ARITHMETIC_H

#include "Control.h"
#include <math.h>

void Add(instruction instructions[], int pc, int registers[]);
void Sub(instruction instructions[], int pc, int registers[]);
void Mul(instruction instructions[], int pc, int registers[]);
void Div(instruction instructions[], int pc, int registers[]);
void Mod(instruction instructions[], int pc, int registers[]);

#endif //ASSEMBLY_TOY_ARITHMETIC_H
