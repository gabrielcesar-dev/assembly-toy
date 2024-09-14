//
// Created by gabri on 10/22/2023.
//

#ifndef ASSEMBLY_TOY_MEMORY_H
#define ASSEMBLY_TOY_MEMORY_H

#include "Control.h"

void Load(instruction instructions[], int pc, int registers[], int memorie[]);
void Store(instruction instructions[], int pc, int registers[], int memorie[]);
#endif //ASSEMBLY_TOY_MEMORY_H
