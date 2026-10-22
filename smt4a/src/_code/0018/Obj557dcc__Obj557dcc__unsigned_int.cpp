/* NON_MATCHING: retail combines the vptr and incoming value with STRD; native initialization emits separate stores. */
#include "shard/W5_W5Match5_ResourceOwner.h"

extern "C" void FUN_0019f888(Obj557dcc *object, u32 value);

/* Retains the requested resource value and starts with no owned entries. */
Obj557dcc::Obj557dcc(u32 initialValue)
{
    value = initialValue;
    begin = NULL;
    end = NULL;
    capacityEnd = NULL;
    FUN_0019f888(this, 0);
}
