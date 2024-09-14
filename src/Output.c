//
// Created by gabri on 10/22/2023.
//

#include <stdio.h>
#include "Output.h"

void Print(int registers[], instruction instructions[], int pc) { //print the value of the destination register
   printf("%d\n", registers[instructions[pc].registerdestination]);
}