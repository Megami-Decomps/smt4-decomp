#include "shard/Shard0047.h"

extern "C" {

typedef struct Block88Owner {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u32 block88[1];
} Block88Owner;

extern u32 FUN_0047d754(u32 *block);

u8 block88OwnerCheck(Block88Owner *obj)
{
    return FUN_0047d754(obj->block88) != 0;
}

} /* extern "C" */
