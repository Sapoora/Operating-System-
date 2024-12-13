#include <pthread.h>
#include <iostream>

const int NUM_THREADS = 4;

const int RANGE = 20;

typedef struct Params {
    int number;
    int start;
    int end;
} params;

void* helloprinter(void* arg)
{
    params* myparams = (params*)(arg);
    for(int i = myparams->start; i < myparams->end; ++i)
    {
        std::cout << "Thread number: " << myparams->number << " hello" << std::endl;
    }
    pthread_exit(NULL);
}


int main()
{
    pthread_t ptt[NUM_THREADS];
    params data[NUM_THREADS];

    int interval = RANGE / NUM_THREADS;
    for(int i = 0; i < NUM_THREADS-1; ++i)
    {
        data[i].start = i * interval;
        data[i].end = (i+1) * interval;
        data[i].number = i;
    }
    data[NUM_THREADS-1].start = (NUM_THREADS-1) * interval;
    data[NUM_THREADS-1].end = RANGE;
    data[NUM_THREADS-1].number = NUM_THREADS-1;

    for(int i = 0; i < NUM_THREADS; ++i)
    {
        pthread_create(&ptt[i], NULL, helloprinter, &data[i]);
    }

    for(int i = 0; i < NUM_THREADS; ++i)
    {
        pthread_join(ptt[i], NULL);
    }
}