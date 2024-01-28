#include <iostream>
#include <pthread.h>

// Function that will be executed by the first thread
void* printNumbers(void* arg) {
    int start = 1;
    int end = 5;
    for (int i = start; i <= end; ++i) {
        std::cout << "Thread 1: " << i << std::endl;
    }
    return nullptr;
}

// Function that will be executed by the second thread
void* printLetters(void* arg) {
    char start = 'A';
    char end = 'E';
    for (char c = start; c <= end; ++c) {
        std::cout << "Thread 2: " << c << std::endl;
    }
    return nullptr;
}

int main() {
    pthread_t thread1, thread2;

    // Creating two threads and associating them with functions
    pthread_create(&thread1, nullptr, printNumbers, nullptr);
    pthread_create(&thread2, nullptr, printLetters, nullptr);

    // Waiting for both threads to finish their tasks
    pthread_join(thread1, nullptr);
    pthread_join(thread2, nullptr);

    // The main thread continues here after the other threads finish
    std::cout << "Main thread: All threads have finished." << std::endl;

    return 0;
}
