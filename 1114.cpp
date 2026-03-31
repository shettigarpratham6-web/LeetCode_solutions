#include <iostream>
#include <functional>
#include <semaphore.h>  

using namespace std;

class Foo {
    sem_t s1, s2;
public:
    Foo() {
        sem_init(&s1, 0, 0); 
        sem_init(&s2, 0, 0); 
    }

    void first(function<void()> printFirst) {
        printFirst();
        sem_post(&s1); 
    }

    void second(function<void()> printSecond) {
        sem_wait(&s1);
        printSecond();
        sem_post(&s2); 
    }

    void third(function<void()> printThird) {
        sem_wait(&s2);
        printThird();
    }
};