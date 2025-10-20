#ifndef gameGetters
#define gameGetters

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

#define START_GAME 1
#define FINISH_GAME 2
#define maxDice 8
#define PLAY_TIME 1
#define NUM_ROUNDS 5

struct gameStruct {
    char* name; 
    char numDice; 
    char round; 
}; 

int available; 
char rounds[maxDice];
struct gameStruct games[maxDice]; 
sem_t mutex, setupMutex, returnMutex;

char getNumDice(char amount); 
char* getName(char amount); 
char* getRoundName(char amount);

#endif
