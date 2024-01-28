# Simple C++ Program with Fork and Thread

This repository contains a simple C++ program demonstrating the use of fork() and threads to calculate the sum of numbers concurrently.

## Program Description

The program calculates the sum of numbers in a specified range using both fork() and a thread. It showcases two scenarios:

1. **Thread Example:** The program uses the `<thread>` library to create a thread that calculates the sum of numbers in a given range concurrently.

2. **Fork Example:** The program uses the `fork()` system call to create a child process that also calculates the sum of numbers concurrently with the parent process.

## Compilation and Execution

To compile the program, use the following command:

```bash
g++ main.cpp -o sum_program -std=c++11 -pthread
