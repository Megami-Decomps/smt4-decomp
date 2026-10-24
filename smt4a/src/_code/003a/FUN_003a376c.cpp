#include "common.h"

struct Obj3a376cSlot {
    u8 unk00[0x12c];
    u16 value;
};

extern "C" {
void scrSetResult(s32 result);
Obj3a376cSlot *saveSlotFindSelected(void);

/* Script command: sets the result to the selected save slot's halfword at 0x12c (0 with no slot). */
s32 FUN_003a376c(void)
{
    Obj3a376cSlot *slot = saveSlotFindSelected();
    scrSetResult(slot != NULL ? slot->value : 0);
    return 1;
}
}
