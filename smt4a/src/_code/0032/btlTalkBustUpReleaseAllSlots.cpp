/* NON_MATCHING: argument setup order only: retail computes `slot->sub` (add r0) before loading the constant 1 into r1; built loads r1 first */
/* Releases every in-use slot of the manager and clears its active flag. */
#include "common.h"
#include "ui/UiSpriteState.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 sub[0x48];
    /* 0x68 */ s32 inUse;
    /* 0x6C */ u8 unk6C[0x20];
} Slot; /* 0x8C */

typedef struct SlotManager {
    /* 0x000 */ Slot slots[5];
    /* 0x2BC */ u8 unk2BC[0x39];
    /* 0x2F5 */ u8 active;
} SlotManager;

extern SlotManager *g_btlTalkBustUp;


void btlTalkBustUpReleaseAllSlots(void)
{
    SlotManager *manager = g_btlTalkBustUp;
    s32 i;

    if (manager != NULL) {
        for (i = 0; i < 5; i++) {
            Slot *slot = &manager->slots[i];

            if (slot->inUse != 0) {
                uiSpriteSelectAnim(slot->sub, 1);
            }
        }
        manager->active = 0;
    }
}

}
