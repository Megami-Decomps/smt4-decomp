#include "shard/Shard0042.h"

extern "C" {

u16 halfPair48LowByteA(HalfPair48 *obj)
{
    return obj->unk48 & 0xFF;
}

} /* extern "C" */
