#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ u8 sprite[0x8C];
    /* 0xA0 */ u8 active;
    /* 0xA1 */ u8 unkA1[3];
    /* 0xA4 */ u32 state;
    /* 0xA8 */ u8 unkA8[8];
} Slot; /* 0xB0 */

typedef struct SlotList {
    /* 0x000 */ Slot slots[12];
} SlotList;

extern void uiSpriteSetImageKeyframe(void *sprite, s32 keyframe, s32 arg);

/* Puts every active slot into state 3 and shows its keyframe 5. */
void FUN_00416610(SlotList *list)
{
    s32 i;

    for (i = 0; i < 12; i++) {
        Slot *slot = &list->slots[i];

        if (slot->active != 0) {
            slot->state = 3;
            slot->unk04 = 0;
            uiSpriteSetImageKeyframe(slot->sprite, 5, 0);
        }
    }
}

} /* extern "C" */
