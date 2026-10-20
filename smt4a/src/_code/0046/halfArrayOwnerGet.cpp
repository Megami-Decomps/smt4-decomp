#include "shard/Shard0046.h"

extern "C" {

typedef struct HalfArrayOwner {
    /* 0x000 */ u8 unk000[0x10C];
    /* 0x10C */ u16 values[0x10];
} HalfArrayOwner;

u16 *halfArrayOwnerGet(HalfArrayOwner *owner, s32 index)
{
    if (index < 0x10) {
        return &owner->values[index];
    }
    return NULL;
}

} /* extern "C" */
