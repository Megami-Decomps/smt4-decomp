#include "common.h"

extern "C" int asdMemFree(void *block);

/* Frees a block. */
extern "C" void FUN_00381730(void *block)
{
    asdMemFree(block);
}
