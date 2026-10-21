/* NON_MATCHING: compiler emits two separate one-word stm instructions instead of a paired stm. */
#include "common.h"
struct Pair { u32 first, second; };
struct PairOwner { u8 unk00[0x20]; Pair value; };
/* Appends both words of the owner's value to the output range. */
extern "C" u32 *FUN_002f451c(u32 *output, const PairOwner *owner) {
    u32 second = owner->value.second;
    *output++ = owner->value.first;
    *output++ = second;
    return output;
}
