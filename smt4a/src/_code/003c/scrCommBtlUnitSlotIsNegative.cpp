#include "common.h"

extern "C" {

typedef struct UnitSlots {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s32 slots[16];
} UnitSlots;

extern s32 scrGetArg(u32 index);
extern void *btlGetMainState(void);
extern UnitSlots *FUN_003eaf20(void);
extern void scrSetResult(s32 value);

/* Script command: pushes whether the selected slot (0..3 mapped to 7, 8, 10, 11) of the current unit is negative. */
s32 scrCommBtlUnitSlotIsNegative(void)
{
    s32 which = scrGetArg(0);
    s32 slot = 0;
    UnitSlots *unit;

    if (which == 0) {
        slot = 7;
    } else if (which == 1) {
        slot = 8;
    } else if (which == 2) {
        slot = 10;
    } else if (which == 3) {
        slot = 11;
    }
    btlGetMainState();
    unit = FUN_003eaf20();
    if (unit != NULL) {
        scrSetResult(unit->slots[slot] <= -1);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */
