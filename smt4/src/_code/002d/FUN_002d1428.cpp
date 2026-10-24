#include "common.h"

extern "C" int asdMemFree(void *block);

/* Releases the block. */
extern "C" int FUN_002d1428(void *block)
{
    return asdMemFree(block);
}
