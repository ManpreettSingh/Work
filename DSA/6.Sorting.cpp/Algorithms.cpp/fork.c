// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    fork();
    for(int i=0;i<2;i++){
        if(fork() && !fork()){
            fork();
        }
    }
    fork();
    printf("hello");

    return 0;
}