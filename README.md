# Toy Assembly

**Toy Assembly – Computer Programming I**  
**Computer Science**  
**Professor: Daniel Saad Nogueira Nunes**  
**Author: Gabriel Cesar Silvino Xavier**

## Overview

Welcome to the **Toy Assembly Project**. This project is a simple **assembly language simulator** written in C, capable of performing various operations such as addition, subtraction, multiplication, division, modulus, equality checks, comparisons, jumps, memory loading and storing, and printing. This README provides details on how to use and compile the project, as well as an overview of its features and usage.

## Modular Design

The project is divided into several modules, each responsible for different parts of the simulator:

- **Input Module**: Handles reading the input program.
- **Output Module**: Manages the printing of data (`PRINT` instruction).
- **Control Module**: Decodes, interprets, and executes the instructions.
- **Arithmetic Module**: Performs arithmetic operations (`ADD`, `SUB`, `MUL`, `DIV`, `MOD`).
- **Logic Module**: Executes logical operations (`BEQ`, `BLT`, `JMP`, `MOV`).
- **Memory Module**: Manages memory operations (`LOAD`, `STORE`).
- **Main Module**: Contains the `main` function and calls functions from the other modules.

## Features

The project supports the following operations:

### Arithmetic Operators:
- **Addition**: `ADD`
- **Subtraction**: `SUB`
- **Multiplication**: `MUL`
- **Division**: `DIV`
- **Modulus**: `MOD`

### Logical Operators:
- **Equal to**: `BEQ`
- **Less than**: `BLT`
- **Move**: `MOV`

### Memory Operators:
- **Load from Memory**: `LOAD`
- **Store to Memory**: `STORE`

### Output Operator:
- **Print**: `PRINT`

## Usage

The following instructions can be used in the **Toy Assembly**:

```
MOV RX INTEGER;       // Move an integer value to register X
MOV RX RY;            // Move the value from register Y to register X
ADD RX RY RZ;         // Add the values of RY and RZ, store in RX
SUB RX RY RZ;         // Subtract RY from RZ, store in RX
MUL RX RY RZ;         // Multiply RY and RZ, store in RX
DIV RX RY RZ;         // Divide RY by RZ, store in RX
MOD RX RY RZ;         // Modulus of RY by RZ, store in RX
BEQ RX RY ADDRESS;    // Jump to address if RX equals RY
BLT RX RY ADDRESS;    // Jump to address if RX is less than RY
JMP ADDRESS;          // Unconditional jump to address
LOAD RX RY;           // Load value from memory at RY into RX
PRINT RX;             // Print the value stored in RX
```

### Notation:

- `RX`: Register X (values between 0 and 31)
- `ADDRESS`: Memory address (between 0 and 999)
- `INTEGER`: A 32-bit numeric value

## Compilation and Execution

Follow these steps to compile and run the project:

1. **Compile**:

   Run the following command to compile the project:

   ```bash
   make
   ```

2. **Run**:

   After compiling, run the program with:

   ```bash
   make run
   ```
