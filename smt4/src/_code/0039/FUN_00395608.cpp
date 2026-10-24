#include "common.h"

extern "C" int asdMemFreeNonNull(void *block);

/* Releases the block. */
extern "C" int FUN_00395608(void *block)
{
    return asdMemFreeNonNull(block);
}
