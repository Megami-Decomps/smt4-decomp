#pragma once
#include "common.h"

extern "C" {

/* Clears an aligned range; returns the address just after it (smt4a). */
void *sysMemClear(void *destination, u32 size);

/* Clears an aligned range; returns the address just after it (smt4). */
void* memClear(void* destination, u32 size);

/* operator delete: frees `memory` if it is not NULL. */
void asdOperatorDelete(void *memory);

/* Frees `block` if it is not NULL (smt4). */
void asdMemFreeNonNull(void *block);

/* Frees the buffer held in *slot (if any), clears the slot and frees the slot itself (smt4a). */
void asdMemFreeSlot(void **slot);

} /* extern "C" */
