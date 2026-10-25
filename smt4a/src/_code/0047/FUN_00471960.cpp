/* NON_MATCHING: slot bytes use computed object bases instead of retail's12/13-plus-index register offsets; slot-array load is predicated. */
#include "addon/aocMain.h"

extern "C" {

s32 asdFsIsSdCardDetected(void);
u32 objGetFlagBit16(void *object);

extern AocMain *g_aocMain;

/* One add-on content slot of the SD card list. */
typedef struct AocSdSlot {
    /* 0x00 */ s32 handle;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 present;
    /* 0x0D */ u8 opened;
    /* 0x0E */ u8 unk0E[2];
} AocSdSlot;

typedef struct AocSdOwner {
    /* 0x000 */ u8 unk000[0x448];
    /* 0x448 */ s32 slotCount;
    /* 0x44C */ u32 unk44C;
    /* 0x450 */ AocSdSlot *slots;
} AocSdOwner;

/* Returns 0 while a present add-on slot still waits to be opened; with no SD card, clears the
 * add-on availability flag. */
u32 FUN_00471960(AocSdOwner *owner)
{
    s32 i;

    if (asdFsIsSdCardDetected() == 0) {
        g_aocMain->flags &= ~0x10000;
    } else if (objGetFlagBit16(g_aocMain) != 0) {
        for (i = 0; i < owner->slotCount; i++) {
            AocSdSlot *slot = &owner->slots[i];
            if (slot->present && !slot->opened && slot->handle == 0) {
                return 0;
            }
        }
    }
    return 1;
}

} /* extern "C" */
