#include "shard/Shard0040.h"

extern "C" {

typedef struct Block5B8Owner {
    /* 0x000 */ u8 unk000[0x5B8];
    /* 0x5B8 */ u8 block5B8[4];
} Block5B8Owner;

u8 *block5B8OwnerGetBlock(Block5B8Owner *owner)
{
    return owner->block5B8;
}

} /* extern "C" */
