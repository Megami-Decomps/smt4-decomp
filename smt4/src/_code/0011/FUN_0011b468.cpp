#include "common.h"

extern "C" {

extern u32 DAT_00464cb8[];

typedef struct Slot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s8 index;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ u32 unk1C;
} Slot;

/* Resets a slot and loads its per-index word from the table at 0x464cb8. */
void FUN_0011b468(Slot *slot, s32 index)
{
    slot->index = index;
    slot->unk00 = 0;
    slot->unk08 = 0;
    slot->unk0C = 0;
    slot->unk10 = 0;
    slot->unk14 = 0;
    slot->unk1C = DAT_00464cb8[index];
}

} /* extern "C" */
