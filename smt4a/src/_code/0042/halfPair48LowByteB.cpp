#include "shard/Shard0042.h"

extern "C" {

u16 halfPair48LowByteB(HalfPair48 *obj)
{
    return obj->unk4A & 0xFF;
}

} /* extern "C" */
