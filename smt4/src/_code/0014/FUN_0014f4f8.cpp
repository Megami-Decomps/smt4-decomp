/* NON_MATCHING: instruction selection/order differs: retail mov r1, r0; compiler ldr r1, [r0]. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Selects the first packed word when its upper bytes are nonzero, otherwise the second. */
u32 FUN_0014f4f8(const PackedWordPair *pair)
{
    u32 first = (pair->first.word & 0xFFFFFF) | ((u32)pair->first.bytes[3] << 24);
    if ((first >>= 8) != 0) {
        return first;
    }
    return (pair->second.word & 0xFFFFFF) | ((u32)pair->second.bytes[3] << 24);
}

} /* extern "C" */
