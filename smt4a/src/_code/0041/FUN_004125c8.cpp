#include "common.h"

extern "C" int asdMemFree(void *block);

/* Frees `block`; the object itself is not involved. */
extern "C" void FUN_004125c8(void *self, void *block)
{
    asdMemFree(block);
}
