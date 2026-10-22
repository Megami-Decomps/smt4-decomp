#include "common.h"

extern "C" int asdMemFreeNonNull(void *block);

/* Release an allocation without a separate null check. */
extern "C" int FUN_0038bd8c(void *block)
{
    return asdMemFreeNonNull(block);
}
