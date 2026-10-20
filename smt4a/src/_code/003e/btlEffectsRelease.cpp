#include "common.h"

extern "C" {

typedef struct BtlSlot {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ u8 effect[0xC4];
} BtlSlot; /* 300 bytes */

typedef struct BtlOwner {
    /* 0x0000 */ u8 unk0000[0x3498];
    /* 0x3498 */ u32 flags;
} BtlOwner;

typedef struct BtlOwnerHolder {
    /* 0x0000 */ u8 unk0000[0x4E48];
    /* 0x4E48 */ BtlOwner *owner;
} BtlOwnerHolder;

typedef struct BtlMainGlobals {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ BtlSlot *slots;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ void *background;
} BtlMainGlobals;

extern BtlMainGlobals g_btlMain;

extern void FUN_004bcb54(void *effect);

/* Releases the battle's background and slot effects and clears flag 1 of the owner's state. */
void btlEffectsRelease(BtlOwnerHolder *holder)
{
    s32 i;

    if (g_btlMain.background != NULL) {
        FUN_004bcb54(g_btlMain.background);
    }
    if (g_btlMain.slots != NULL) {
        for (i = 0; i < 24; i++) {
            BtlSlot *slot = &g_btlMain.slots[i];

            FUN_004bcb54(slot->effect);
        }
    }
    holder->owner->flags &= ~1;
}

} /* extern "C" */
