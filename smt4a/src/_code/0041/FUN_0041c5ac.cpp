#include "common.h"

extern "C" int asdMemFree(void *block);

/* Frees `block`; the object itself is not involved. */
extern "C" void FUN_0041c5ac(void *self, void *block)
{
    asdMemFree(block);
}
