#include "common.h"

extern "C" int asdMemFreeNonNull(void *block);

/* Release an allocation without a separate null check. */
extern "C" int _ZN9Obj4221e4D0Ev(void *block)
{
    return asdMemFreeNonNull(block);
}
