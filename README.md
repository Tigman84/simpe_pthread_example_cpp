
#### Simple Pthreads C++ Example

This repository contains a simple C++ program demonstrating the use of pthreads (POSIX threads) for multithreading.

### Instructions

1. Clone the repository:

   ```bash
   git clone https://github.com/Tigman84/simpe_pthread_example_cpp.git
   ```

2. Compile the program:

   ```bash
   g++ -o multithreading_example multithreading_example.cpp -pthread -std=c++11
   ```

3. Run the executable:

   ```bash
   ./multithreading_example
   ```

### Description

This C++ program creates two threads using pthreads, each performing a simple task. The `printNumbers` function prints numbers from 1 to 5, and the `printLetters` function prints letters from 'A' to 'E'. The main function creates these threads, and the `pthread_join` function is used to wait for their completion.

Feel free to use and modify this code for your learning or development purposes.
