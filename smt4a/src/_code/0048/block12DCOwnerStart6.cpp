#include "shard/Shard0048.h"

extern "C" {

typedef struct Block12DCOwner {
    /* 0x0000 */ u8 unk0000[0x12D1];
    /* 0x12D1 */ u8 unk12D1;
    /* 0x12D2 */ u8 unk12D2[0xA];
    /* 0x12DC */ u8 block12DC[4];
} Block12DCOwner;

extern void FUN_00184758(u8 *block, s32 a, s32 b);

void block12DCOwnerStart6(Block12DCOwner *obj)
{
    obj->unk12D1 = 1;
    FUN_00184758(obj->block12DC, 6, 0);
}

} /* extern "C" */
