#include "shard/Shard004F.h"

extern "C" {

typedef struct Slot30 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ s32 unk30;
} Slot30;

typedef struct Slots4F {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 index;
    /* 0x20 */ u8 unk20[0x64];
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u8 unk88[8];
    /* 0x90 */ s32 unk90;
    /* 0x94 */ u8 unk94[0x20];
    /* 0xB4 */ u32 unkB4;
    /* 0xB8 */ u8 unkB8[8];
    /* 0xC0 */ s32 unkC0;
} Slots4F;

u32 slots4FGetActiveValue(Slots4F *obj)
{
    u32 *value;
    Slot30 *slot = (Slot30 *)((u8 *)obj + obj->index * 0x30);

    if (slot->unk30 != 0) {
        value = &slot->unk24;
    } else if (obj->unk90 != 0) {
        value = &obj->unk84;
    } else {
        if (obj->unkC0 == 0) {
            return 0xFFFF;
        }
        value = &obj->unkB4;
    }
    return *value;
}

} /* extern "C" */
