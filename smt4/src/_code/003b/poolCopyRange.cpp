#include "common.h"

struct PoolCopyState {
    /* 0x00 */ void *vtable;
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
    /* 0x0C */ u8 unk0c[0xc];
    /* 0x18 */ u32 count;
};

/* Copy the pool's count and its two range values. */
extern "C" void poolCopyRange(PoolCopyState *destination, const PoolCopyState *source)
{
    destination->count = source->count;
    destination->first = source->first;
    destination->second = source->second;
}
