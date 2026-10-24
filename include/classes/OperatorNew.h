#ifndef CLASSES_OPERATORNEW_H
#define CLASSES_OPERATORNEW_H

#include "common.h"

/* The game's global operator new (the allocation function at 0x2e760a) returns null when the
 * heap is exhausted, so `new` expressions test for null before constructing. */
void *operator new(u32 bytes) throw();

#endif
