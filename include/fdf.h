#ifndef ___FDF_LIB___
#define ___FDF_LIB___
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern int global_pointer_nb;
extern void **global_pointer_base;

void *fdf_malloc(size_t		size);
void fdf_free();

#endif
