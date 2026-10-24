#include "common.h"

/* Releases the block. */
extern "C" int asdMemFree(void *block);

extern "C" int FUN_00337f44(void *block)
{
    return asdMemFree(block);
}
