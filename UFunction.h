#ifndef UFUNCTION
#define UFUNCTION

#include <iostream>
#include <time.h>

int (*create(int));
void (*summa(int*, int))(int*, int);
void inv(int*, int);
void reach(int*, int);
void down(int*, int);
void out(int*, int);
void activation(void(* uk)());

#endif