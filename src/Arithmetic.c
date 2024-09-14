//
// Created by gabri on 10/22/2023.
//

#include "Arithmetic.h"

void Add(instruction instructions[], int pc, int registers[]) { //add the value of the source register to the value of the target register and save in the destination register
    registers[instructions[pc].registerdestination] = registers[instructions[pc].registersource] + registers[instructions[pc].registertarget];
}
void Sub(instruction instructions[], int pc, int registers[]) { //subtract the value of the source register to the value of the target register and save in the destination register
    registers[instructions[pc].registerdestination] = registers[instructions[pc].registersource] - registers[instructions[pc].registertarget];
}
void Mul(instruction instructions[], int pc, int registers[]) { //multiply the value of the source register to the value of the target register and save in the destination register
    registers[instructions[pc].registerdestination] = registers[instructions[pc].registersource] * registers[instructions[pc].registertarget];
}
void Div(instruction instructions[], int pc, int registers[]) { //divide the value of the source register to the value of the target register and save in the destination register
    registers[instructions[pc].registerdestination] = registers[instructions[pc].registersource] / registers[instructions[pc].registertarget];
}
void Mod(instruction instructions[], int pc, int registers[]) { //divide the value of the source register to the value of the target register and save the rest in the destination register
    registers[instructions[pc].registerdestination] = registers[instructions[pc].registersource] % registers[instructions[pc].registertarget];
    if (registers[instructions[pc].registerdestination] < 0) { //if the rest is negative, make it positive`
        registers[instructions[pc].registerdestination] += fabs(registers[instructions[pc].registertarget]);
    }
}
