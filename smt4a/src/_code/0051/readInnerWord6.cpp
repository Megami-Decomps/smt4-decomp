#include "shard/Shard0051.h"

extern "C" {

u8 readInnerWord6(Ref4 *ref, u32 *out)
{
    if (ref != NULL) {
        u32 *words = (u32 *)(ref->inner + 0x141C);

        *out = words[6];
    }
    return ref == NULL;
}

} /* extern "C" */
