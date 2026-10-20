#include "common.h"

extern "C" {

typedef struct SlotSet {
    /* 0x000 */ u8 data[0x1C0];
} SlotSet; /* 0x1C0 */

typedef struct SlotOwner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u8 index;
} SlotOwner;

extern SlotSet DAT_0062e6d0[];
extern u32 FUN_00310024(SlotSet *slot);
extern s32 slotSetGet(SlotSet *slot, u32 value);

/* Looks the owner's slot set up with FUN_00310024 and passes the result on to slotSetGet. */
void FUN_002ef01c(SlotOwner *owner)
{
    slotSetGet(&DAT_0062e6d0[owner->index], FUN_00310024(&DAT_0062e6d0[owner->index]));
}

} /* extern "C" */
