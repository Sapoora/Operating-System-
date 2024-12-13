#include <pthread.h>
#include <iostream>

const int NUM_THREADS = 4;

void* helloprinter(void* arg)
{
    std::cout << "Thread number: " << *(int*)(arg) << " hello" << std::endl;
    pthread_exit(NULL);
}


int main()
{
    pthread_t ptt[NUM_THREADS];
    int data[NUM_THREADS] = {0, 1, 2, 3};
    for(int i = 0; i < NUM_THREADS; ++i)
    {
        pthread_create(&ptt[i], NULL, helloprinter, (void*)(&data[i]));
    }

    for(int i = 0; i < NUM_THREADS; ++i)
    {
        pthread_join(ptt[i], NULL);
    }
}